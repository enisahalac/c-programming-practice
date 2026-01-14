#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    
    printf("Enter a num: ");
    scanf("%d", &x);

    int digit;
    int maxDigit = 0;
    
    x = abs(x);
    
    while (x != 0) {
        digit = x % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        x /= 10;
    }
    
    printf("%d", maxDigit);
    
    return 0;
}