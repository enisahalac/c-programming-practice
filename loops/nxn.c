#include <stdio.h>

int main() {
    int n = 0;
    int i, j;
    
    printf("Enter a num: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}