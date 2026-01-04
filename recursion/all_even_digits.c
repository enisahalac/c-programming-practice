#include <stdio.h>

int allEvenDigitsRec(int n) {
    if (n == 0) {
        return 1;
    }

    int lastDigit = n % 10;             

    if (lastDigit % 2 != 0) {
        return 0;
    }  

    return allEvenDigitsRec(n / 10);  
}

int allEvenDigits(int n) {
    while (n > 0) {
        int lastDigit = n % 10;      
        if (lastDigit % 2 != 0) {    
            return 0;            
        }
        n = n / 10;               
    }

    return 1;  
}

int main() {
    int n;
    
    printf("Enter a num: ");
    scanf("%d", &n);

    if (allEvenDigitsRec(n)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}