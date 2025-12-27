#include <stdio.h>

void appearTwice(int array[], int n) {
    int i, j;
    int k = 0; 
    int newArray[n]; 

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count == 2) {
            int exists = 0;
            for (j = 0; j < k; j++) {
                if (newArray[j] == array[i]) {
                    exists = 1;
                    break;
                }
            }
            if (!exists) {
                newArray[k] = array[i];
                k++;
            }
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d ", newArray[i]);
    }
}

int main () {
    int array[] = {1, 4, 4, 2, 3, 1, 2};
    int n = 7;

    appearTwice(array, n);

    return 0;
}