#include <stdio.h>

/**
 * Proof of conceptual understanding of pointers.
 */

int alterptr(int y) {
    return 0;
}

int main(int argc, char *argv[], char *envp[]) {
    int x = 3, i = 0, n = 0;
    int *ptr = &x;
    char *env;

    printf("x is pointing to: %d\npointer points to value of: %d\n", x, *ptr);

    //env vars
    printf("envp, printed here:\n");
    while (env = envp[i++])
        printf("envp[%d] = %s\n", i, envp[i]);

    //args
    printf("argv, printed here:\n");
    if (argc > 1)
        for (n; n < argc; n++)
            printf("argv[%d] = %s\n", n, argv[n]);
    else
        printf("no parameters were passed!\n");
}
