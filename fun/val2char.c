#include <stdio.h>
#include <stdlib.h> //atoi()
#define DELIM 32 //@TODO: dynamically set delim char

int main() {
  int c, num;

  char ch[4];
  char *ptr = ch;

  while ((c = getchar()) != EOF) {
    if (c == DELIM) {
      *ptr++ = '\0';
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
