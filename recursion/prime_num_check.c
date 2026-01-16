#include <stdio.h>

int isDivisible(int n, int i) {
    if (i >= n) {
        return 0;
    }

    if (n % i == 0) {
        return 1;
    }

    return isDivisible(n, i + 1);
}

int primeNumRec(int n) {
    if (n <= 1) {
        return 0;
    }

    if (isDivisible(n, 2)) {
        return 0;
    }

    return 1;
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    if (primeNumRec(n)) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}