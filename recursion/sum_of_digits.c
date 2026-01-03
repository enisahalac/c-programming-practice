#include <stdio.h>

int sumDigitsRec(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumDigitsRec(n / 10);
}

int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
    
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%d", sumDigits(n));

    return 0;
}