#include <stdio.h>

void reverseNumRec(int n) {
    if (n == 0) {
        return;
    }

    printf("%d", n % 10);
    reverseNumRec(n / 10);
}

void reverseNum(int n) {
    while (n > 0) {
        printf("%d", n % 10);
        n = n / 10;
    }
}

int main () {
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    reverseNumRec(n);

    return 0;
}