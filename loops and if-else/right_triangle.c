#include <stdio.h>

int main() {
    int n = 10;
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}