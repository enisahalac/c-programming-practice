#include <stdio.h>

int main() {
    int n;
    int i, j;
    
    do {
        printf("Enter a num: ");
        scanf("%d", &n);
    } while (n <= 4);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) {
            if (i == j || j == n-1 || j == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}