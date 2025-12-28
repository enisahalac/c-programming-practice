#include <stdio.h>

int factoriel(int n) {
    if (n == 1) {
        return 1;
    }

    return n * factoriel(n-1);
}

int main () {
    int n = 6;

    int x = factoriel(n);

    printf("%d", x);

    return 0;
}