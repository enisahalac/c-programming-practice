#include <stdio.h>

int findMaxRecursion(int array[], int n) {
    if (n == 1) {
        return array[0];
    }

    int max = findMaxRecursion(array, n-1);

    if (array[n-1] > max) {
        return array[n-1];
    }
    else {
        return max;
    }
}


int main () {
        int array[] = {-1, -2, -3, -4, -5, -6};
        int n = 6;
    
        int x = findMaxRecursion(array, n);

        printf("%d", x);

    return 0;
}