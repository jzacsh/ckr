#include <stdio.h>

long fermat(long);
long mypow(long, long);

long mypow(long base, long exp) {
    //weird math - why is this?
    if (!exp) {
        return 1;
    }
    else if (exp == 1) {
        return base;
    }

    long result = base;
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
long fermat(long index) {
    return mypow(2, mypow(2, index)) - 1;
}

int main(int argc, char *argv[], char *envp[]) {
    long i = 0, n;

    while (n = fermat(i)) {
        printf("fermat(%d) = %d\n", i++, n);
    }

    return 0;
}
