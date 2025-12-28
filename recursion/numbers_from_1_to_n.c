#include <stdio.h>

void numbersOneToNRecursion(int n) {
    if (n == 0) {
        return;
    }

    numbersOneToNRecursion(n-1);
    printf("%d ", n);
}

int main () {
    int n = 5;

    numbersOneToNRecursion(n);

    return 0;
}