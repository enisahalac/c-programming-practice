#include <stdio.h>

int sumDigitsRec(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumDigitsRec(n / 10);
}

int sumDigits(int n) {
    return sumDigitsRec(n);
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    int x = sumDigits(n);

    printf("%d", x);

    return 0;
}