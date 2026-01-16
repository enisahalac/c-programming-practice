#include <stdio.h>

int palindrome(int array[], int n) {
    int i;
    int count = 1;
    int existence = 0;

    for (i = 0; i < n; i++) {
        if (array[i] == array[n-count]) {
            existence = 1;
            count += 1;
        }
        else {
            existence = 0;
            break;
        }
    }

    return existence;
}

int main () {
    int array[] = {1, 2, 3, 2, 1};
    int n = 7;

    int x = palindrome(array, n);

    printf("%s", x ? "YES" : "NO");

    return 0;
}