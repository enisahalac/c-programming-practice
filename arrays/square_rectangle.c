#include <stdio.h>

int main () {
    int n;

    printf("Unesite stranicu kvadrata: ");
    scanf("%d", &n);

    int i, j;

    if (n % 2 == 0) {
        for (i = 0; i < (n + (n / 2)); i++) {
            for (j = 0; j < ((2 * n) + 1); j++) {
                if (i < n && j != n) {
                    printf("+");
                } else if (j == n && i < n) {
                    printf(" ");
                } else {
                    printf("+");
                }
        }
            printf("\n");
        }
    } else {
        for (i = 0; i < 2 * n; i++) {
            for (j = 0; j < ((2 * n) + 1); j++) {
                if (i < n && j != n) {
                    printf("+");
                } else if (j == n && i < n) {
                    printf(" ");
                } else {
                    printf("+");
                }
            }
            printf("\n");
        }    
    }

    return 0;
}