#include <stdio.h>

int largestDigitRec(int n) {
    if (n < 10) {
        return n;
    }               

    int lastDigit = n % 10;                 
    int remaining = largestDigitRec(n / 10);  

    return (lastDigit > remaining) ? lastDigit : remaining; 
}

int largestDigit(int n) {
    int max = 0;

    while (n > 0) {
        int digit = n % 10;     
        if (digit > max) {
            max = digit;     
        }
        n = n / 10;               
    }

    return max;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", largestDigit(n));
    
    return 0;
}