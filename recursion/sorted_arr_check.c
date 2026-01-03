#include <stdio.h>

int isSortedRec(int array[], int n) {
    if (n <= 1) {
        return 1;
    }

    if (array[0] > array[1]) {
        return 0;
    }

    return isSortedRec(array + 1, n - 1);
}

int main () {
    int array[] = {1, 3, 2, 7};
    int n = 4;

    if (isSortedRec(array, n)) {
        printf("Sorted");
    }
    else {
        printf("Not sorted");
    }

    return 0;
}