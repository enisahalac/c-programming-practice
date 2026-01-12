#include <stdio.h>

int main() {
    int n;
    int i;
    
    printf("Enter a num: ");
    scanf("%d", &n);
    
    
    for (i = n; i >= 0; i--) {
        if (i % 5 == 0 || i % 7 == 0 || i % 11 == 0) {
            printf("%d ", i);        }
    }
    
    return 0;
}