#include <stdio.h>
#include <unistd.h>

int DEBUG = 1;

/**
 * Remake of `env`
 */
int main (int argc, char *argv[], char *envp[]) {
    int i = 0, x = 0;
    char *env;
    int opt;

    if (DEBUG) printf("DEBUG: argc: %d\n", argc);

    if (argc == 1)
        while (envp[i]) printf("%s\n", envp[i++]);

    if (DEBUG) printf("DEBUG: below is the current argv[]\n");
    while (argv[x]) {
        if (DEBUG) printf("DEBUG: argv[%d] = %s\n", x, argv[x]);
        x++;
    }

    while ((opt = getopt(argc, argv, "i0u")) != -1) {
        if (DEBUG) printf("DEBUG: opt is: %c; optind is: %d\n", opt, optind);
        if (DEBUG) printf("argv[optind(%d)] = %s\n", optind, argv[optind]);
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
                printf("ain't n0 such thang, boy!\n");
                break;
        }
    }

    if (DEBUG) printf("DEBUG: optind = %d\n", optind);
    x = 0;
    if (DEBUG) printf("DEBUG: below is the current argv[]\n");
    while (argv[x]) {
        if (DEBUG) printf("DEBUG: argv[%d] = %s\n", x, argv[x]);
        x++;
    }

    return 0;
}
