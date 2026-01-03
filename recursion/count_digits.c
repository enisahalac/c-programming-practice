#include <stdio.h>

int countDigitsRec(int n) {
    if (n == 0) {
        return 1;
    }

    if (n < 10) {
        return 1;
    }

    return 1 + countDigitsRec(n / 10);
}

int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%d", countDigitsRec(n));

    return 0;
}