#include <stdio.h>

int countOccurrencesRecursion(int array[], int n, int a) {
    if (n == 0) {
        return 0;
    }
    
    if (array[0] == a) {
        return 1 + countOccurrencesRecursion(array + 1, n - 1, a);
    }
    else {
        return countOccurrencesRecursion(array + 1, n - 1, a);
    }
}

int main () {
    int array[] = {4, 2, 1, 2, 2, 4};
    int n = 6;
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    int x = countOccurrencesRecursion(array, n, a);

    printf("%d", x);

    return 0;
}