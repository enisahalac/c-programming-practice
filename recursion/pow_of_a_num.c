#include <stdio.h>

int powNumRec(int x, int n) {
    if (n == 0) {
        return 1;
    }

    return  x * powNumRec(x, n-1);
}

int main () {
    int x = 2;
    int n = 4;

    int m = powNumRec(x, n);

    printf("%d", m);

    return 0;
}