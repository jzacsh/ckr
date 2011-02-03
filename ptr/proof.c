#include <stdio.h>

/**
 * Proof of conceptual understanding of pointers.
 */

int alterptr(int y) {
    return 0;
}

int main(int argc, char *argv[], char *envp[]) {
    int x = 3, i = 0;
    int *ptr = &x;

    printf("x is pointing to: %d\npointer points to value of: %d\n", x, *ptr);

    while (argv[i++])
        printf("DEBUG: argv[%d] = %s\n", i-1, argv[i-1]);

    return 0;
}
