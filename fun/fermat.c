#include <stdio.h>

int fermat(int);
int pow(int, int);

int pow(int base, int exp) {
    int res = 1;

    if (exp) {
        res = base;
    }

    --exp;
    while (exp--) {
        res = base * res;
    }

    return res;
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
    return pow(2, pow(2, index)) - 1;
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
