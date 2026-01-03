#include <stdio.h>

int reverseNumRec(int n, int a) {
    if (n == 0) {
        return a;
    }

    return reverseNumRec(n / 10, a * 10 + n % 10);
}

int reverseNum(int n, int a) {
    while (n > 0) {
        a = a * 10 + n % 10;
        n = n / 10;
    }

    return a;
}


int main () {
    int n;
    int a = 0;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%d", reverseNum(n, a));

    return 0;
}