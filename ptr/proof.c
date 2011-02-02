#include <stdio.h>

/**
 * Proof of conceptual understanding of pointers.
 */

int alterptr(int y) {
    return 0;
}

int main(int argc, char **argv) {
    int x = 3;
    int *ptr = &x;

    printf("x is pointing to: %d\npointer points to value of: %d\n", x, *ptr);
}
