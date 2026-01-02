#include <stdio.h>

int findMaxRecursion(int array[], int n, int i, int max) {
    if (i == n) {
        return max;
    }

    if (max < array[i]) {
        max = array[i];
    }

    return findMaxRecursion(array, n, i+1, max);
}

int main () {
        int array[] = {1, 4, 6, 8, 2, 3};
        int n = 6;
        int i = 0;
        int max = 0;

        int x = findMaxRecursion(array, n, i, max);

        printf("%d", x);

    return 0;
}