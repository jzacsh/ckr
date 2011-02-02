#include <stdio.h>
#include <unistd.h>

int DEBUG = 1;

/**
 * Remake of `env`
 */
int main (int argc, char *argv[], char *envp[]) {
    int i = 0;
    char *env;
    int opt;

    if (DEBUG) printf("DEBUG: argc: %d\n", argc);

    if (argc == 1)
        while (envp[i]) printf("%s\n", envp[i++]);

    while ((opt = getopt(argc, argv, "i0u")) != -1) {
        if (DEBUG) printf("DEBUG: opt is: %c\n", opt);
        switch (opt) {
            case 'i':
                printf("implement `%c`!\n", opt);
                break;
            case 'u':
                printf("implement `%c`!\n", opt);
                break;
            case '0':
                printf("implement `%c`!\n", opt);
                break;
            default:
                printf("you ain't doing n0thin, boy!\n");
                break;
        }
    }

    return 0;
}
