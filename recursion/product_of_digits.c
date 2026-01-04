#include <stdio.h>

int productDigitsRec(int n) {
    if (n == 0) {
        return 1;
    }
    
    int lastDigit = n % 10;          
    return lastDigit * productDigitsRec(n / 10); 
}

int productDigits(int n) {
    int product = 1;

    while (n > 0) {
        int lastDigit = n % 10;  
        product *= lastDigit;       
        n = n / 10;            
    }
    
    return product;
}

int main() {
    int n;
    
    printf("Enter a num: ");
    scanf("%d", &n);

    printf("%d", productDigitsRec(n));
    
    return 0;
}