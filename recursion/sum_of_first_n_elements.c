#include <stdio.h>

int sumOneToNRecursion(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumOneToNRecursion(n-1);
}

int main () {
    int n = 5;

    int a = sumOneToNRecursion(n);

    printf("%d", a);

    return 0;
}