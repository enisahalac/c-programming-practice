#include <stdio.h>

int findSecondLargest(int array[], int n) {
    int i;
    int firstMax = 0;
    int newArray[n], k = 0;

    for (i = 0; i < n; i++) {
        if (firstMax < array[i]) {
            firstMax = array[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (array[i] == firstMax) {
            continue;
        }
        else {
            newArray[k] = array[i]; // array without firstMax
            k++;
        }
    }

    int secondMax = 0;

    for (i = 0; i < k; i++) {
        if (secondMax < newArray[i]) {
            secondMax = newArray[i];
        }
    }

    return secondMax;
}

int main () {
    int array[] = {8, 9, 3, -5, 2, 7};
    int n = 6;

    int a = findSecondLargest(array, n);

    if (a == 0) {
        printf("No second largest element in an array.");
    }
    else {
        printf("The second largest element in an array: %d ", a);

    }

    return 0;
}