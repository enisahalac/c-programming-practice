#include <stdio.h>

int sumElemRecursion(int array[], int n, int i) {
    if (i == n) {
        return 0;
    }

    return array[i] + sumElemRecursion(array, n, i+1);
}

int main () {
    int array[] = {1, 5, 3, 4};
    int n = 4;
    int i = 0;

    int x = sumElemRecursion(array, n, i);

    printf("%d", x);

    return 0;
}