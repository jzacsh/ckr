#include <stdio.h>
#include <stdlib.h>
#define DELIM 32 //character delimiter

int main() {
  int c;

  char ch[4];
  char *ptr = ch;

  while ((c = getchar()) != EOF) {
    if (c == DELIM) {
      *ptr++ = '\0';
      int num;
      num = atoi(ch);
      printf("%c", num);
      ch[0] = ch[1]= ch[2] = 0;
      ptr = &ch[0];
    }
    else
      *ptr++ = c;
  }

  return 0;
}
