#include <stdio.h>
#include <stdlib.h>
#define DELIM 32 //character delimiter

int main() {
  int c;

  char ch[3];
  char *ptr = ch;

  while ((c = getchar()) != EOF) {
    if (c == DELIM) {
      printf("DBG: a space has been found\nconverting current ch (%c) to integer.\n", ch);
      int num;
      num = atoi(ch);
      printf("DBG: char string has been converted to integer %d\n", num);
      printf("%d", num);
      ch[0] = ch[1]= ch[2] = 0;
      ptr = &ch[0];
    }
    else
      *ptr++ = c;
      printf("DBG: char, so far, is %s\n", ch);
  }

  printf("\n");

  return 0;
}
