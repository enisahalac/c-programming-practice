#include <stdio.h>

int does_It_Increase (int array[], int n) {
    int i;
    int warehouse[n];
    int counter = 0;

    for (i = 0; i < n; i++) {
        warehouse[i] = array[i];
    }

    for (i = 1; i < n; i++) {
        if (array[i] > warehouse[i-1]) {
            counter = 1; 
        }
        else {
            counter = 0; 
            break;
        }
    }

    return counter;

}

int main () {

    int array[] = {2, 4, 6, 8, 10};
    int n = 5;
    
    int x = does_It_Increase(array, n);

    printf("%d", x);

    return 0;

}