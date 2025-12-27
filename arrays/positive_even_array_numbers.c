#include <stdio.h>

void positiveEvenNumbers(int arrayFromInput[], int n) {
    int i;
    int newArray[n];
    int counter = 0;

    for (i = 0; i < n; i++) {
        newArray[i] = arrayFromInput[i];
        if ((arrayFromInput[i] > 0) && (arrayFromInput[i] % 2 == 0)) {
            printf("%d ", newArray[i]);
        }
        else {
            counter++;
        }
    }

    if (counter == n) {
        printf("No positive even numbers!");
    }
}

int main () {
    int n;

    printf("Number of elements in the array: ");
    scanf("%d", &n);

    int arrayFromInput[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arrayFromInput[i]);
    }

    positiveEvenNumbers(arrayFromInput, n);

    return 0;

}