#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>

#define MAXOP  100  /* max size of operand or operator */
#define NUMBER '0'  /* signal that anumber was found */
#define MAXVAL 100  /* maximum depth of val stack */

void push(double);
double pop(void);

//getop() stuff
int getch(void);
void ungetch(int);

//push/pop stuff
int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* value stack */

/* push: push f onto value stack */
void push(double f) {
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void) {
  if (sp > 0)
    return val[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}


/* getop: get next operator or numeric operand */
int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;  /* not a number */
  i = 0;
  if (isdigit(c))  /* collect integer part */
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')    /* collect fraction part */
    while (isdigit(s[++i] = c = getch()))
      ;
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

/* reverse Polic calculator */
main() {
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {
    switch (type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '*':
        push(pop() * pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '/':
        op2 = pop();
        if (op2 != 0.0)
          push(pop() / op2);
        else
          printf("error: zero divisor, undefined.\n");
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        break;
      default:
        printf("error: unknown command %s.\n", s);
        break;
    }
  } //end while
  return 0;
}

