#include <stdio.h>

int main() {
  int c;
  int delim = 32; //@TODO: set dynamically

  while ((c = getchar()) != EOF)
    printf("%d%c", c, delim);

  printf("\n");

  return 0;
}
