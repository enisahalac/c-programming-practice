#include <stdio.h>

int findMaxRecursion(int array[], int n) {
    if (i == n) {
        if (max == 0) {
            return  ;
        }
        else {
            return max;
        }
    }

    if (max < array[i]) {
        max = array[i];
    }

    return findMaxRecursion(array, n);
}

int main () {
        int array[] = {1, 4, 6, 8, 2, 3};
        int n = 6;

        int x = findMaxRecursion(array, n);

        printf("%d", x);

    return 0;
}