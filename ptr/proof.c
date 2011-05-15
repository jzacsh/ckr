#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int DEBUG = 1;

/**
 * Proof of conceptual understanding of pointers,
 * and anything else I damn well please to raid this file for.
 */

int alterptr(int y) {
    return(0);
}

int main(int argc, char *argv[], char *envp[]) {
    int x = 3, i = 0;
    int *ptr = &x;

    if (DEBUG) printf("x is pointing to: %d\nptr->[addr: %d] = %d\n", x, ptr, *ptr);

    while (argv[i++])
        if (DEBUG) printf("DEBUG: argv[%d] = %s\n", i-1, argv[i-1]);

    //@see: strerror(3p) -- what is this?
    if (DEBUG) fprintf(stderr, "gah, error!\n");
    if (DEBUG) return(4);
/**
 * @see: open(3p)
 * @see: fcntl(3p)
 *
    char *fname = "./example";
    int boop_fd;
    if (boop_fd = open(fname, O_WRONLY | O_EXCL)) {
        //
    }
*/

    return(0);
}
