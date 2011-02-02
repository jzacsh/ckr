#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
    int i = 0, n = 0;
    char *env;

    //env vars
    printf("envp, printed here:\n");
    while (env = envp[i++])
        printf("envp[%d] = %s\n", i, env);

    //proof of null pointer for termination
    printf("env ending as: %s.\n", env);

    //args
    printf("argv, printed here:\n");
    if (argc > 1)
        for (n; n < argc; n++)
            printf("argv[%d] = %s\n", n, argv[n]);
    else
        printf("no parameters were passed!\n");

    return 0;
}
