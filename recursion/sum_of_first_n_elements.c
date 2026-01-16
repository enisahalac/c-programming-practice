#include <stdio.h>

int sumOneToNRec(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumOneToNRec(n-1);
}

int main () {
    int n = 5;

    int a = sumOneToNRec(n);

    printf("%d", a);

    return 0;
}