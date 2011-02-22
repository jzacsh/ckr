#include <stdio.h>

int fermat(int);
int mypow(int, int);

int mypow(int base, int exp) {
    //weird math - why is this?
    if (!exp) {
        return 1;
    }
    else if (exp == 1) {
        return base;
    }

    int result = base;
    //actual exponentation algorithm:
    while (exp--) {
        result = base * result;
    }
    return result;
}

/**
 * Calculate Fermat numbers.
 *
 *   F(k) = (2 ^ (2 ^ k) ) - 1
 *
 * @param  int  index to be calculated
 * @return  int  result of the Fermat calculation at index.
 */
int fermat(int index) {
    return mypow(2, mypow(2, index)) - 1;
}

int main(int argc, char *argv[], char *envp[]) {
    int i = 0, n;

/*
    if (argc != 2) {
        return 1;
    }
*/

    while (n = fermat(i)) {
        printf("fermat(%d) = %d\n", i++, n);
    }

    return 0;
}
