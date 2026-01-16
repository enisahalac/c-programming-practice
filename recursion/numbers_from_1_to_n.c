#include <stdio.h>

void numbersOneToNRec(int n) {
    if (n == 0) {
        return;
    }

    numbersOneToNRec(n-1);
    printf("%d ", n);
}

int main () {
    int n = 5;

    numbersOneToNRec(n);

    return 0;
}