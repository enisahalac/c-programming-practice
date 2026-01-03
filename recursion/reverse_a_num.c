#include <stdio.h>

int reverseNumRec(int n, int rev) {
    if (n == 0) {
        return rev;
    }

    return reverseNumRec(n / 10, rev * 10 + n % 10);
}

int reverseNum(int n) {
    int a = 0;
    while (n > 0) {
        a = a * 10 + n % 10;
        n = n / 10;
    }

    return a;
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%d", reverseNumRec(n, 0));

    return 0;
}