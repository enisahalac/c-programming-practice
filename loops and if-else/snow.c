#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a num: ");
    scanf("%d", &n);
    
    int i, j;
    
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}