#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    while (sum <= 100) {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    }
    
    printf("Sum is %d", sum);

    return 0;
}