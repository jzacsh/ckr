#include <stdio.h>
#include <unistd.h>

int DEBUG = 1;

/**
 * Remake of `env`
 */
int main (int argc, char *argv[], char *envp[]) {
    int i = 0;
    char *env;
    int opts = getopt(argc, argv, "i,0,u");

    if (opts == -1)
        while (env = envp[i++])
            printf("%s\n", env);

    if (DEBUG) printf("DEBUG: opts = %d\n", opts);

    return 0;
}
