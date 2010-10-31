#include <stdio.h>

int main() {
  int c;

  char ch[3];
  char *ptr = ch;

  while ((c = getchar()) != EOF) {
    if (c == 32)
      printf("%s", ch);
    else
      *ptr++ = c;
  }

  printf("\n");

  return 0;
}
