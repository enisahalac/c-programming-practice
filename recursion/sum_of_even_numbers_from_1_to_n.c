#include <stdio.h>

int sumEvenNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    if (n % 2 == 0) {
        return n + sumEvenNumbers(n-1);
    }
    else {
        return sumEvenNumbers(n-1);
    }
}

int main () {
    int n = 6; 

    int x = sumEvenNumbers(n);

    printf("%d", x);

    return 0;
}