#include <stdio.h>

int sumOddNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    if (n % 2 == 1) {
        return n + sumOddNumbers(n-1);
    }
    else {
        return sumOddNumbers(n-1);
    }
}

int main () {
    int n = 1;

    int a = sumOddNumbers(n);

    printf("%d", a);
    
    return 0;
}