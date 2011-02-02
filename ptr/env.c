#include <stdio.h>
#include <unistd.h>

/**
 * Remake of `env`
 */
int main (int argc, char *argv[], char *envp[]) {
    int i = 0;
    char *env;

    /*
     * why can't i _just_ comment out `printf`?
     *
    if (argc == 1)
        while (env = envp[i++])
            printf("%s\n", env);
    */


    int opts = getopt(argc, argv, "i,0,u");
    printf("opts = %d\n", opts);

    return 0;
}
