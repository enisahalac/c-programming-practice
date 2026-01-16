#include <stdio.h>

int main() {
    int x, z;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("Digit to discard: ");
    scanf("%d", &z);
    
    int digit;
    int revNum = 0;
    
    while (x != 0) {
        digit = x % 10;
        if (digit != z) {
            revNum = revNum * 10 + digit;
        }
        x /= 10;
    }
    
    int newNum = 0; 
    
    while (revNum != 0) {
        digit = revNum % 10;
        newNum = newNum * 10 + digit;
        revNum /= 10;
    }
    
    printf("%d", newNum);
    
    return 0;
}