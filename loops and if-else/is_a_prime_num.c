#include <stdio.h>

int main() {
    int n;
    int primeNum = 1;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        primeNum = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                primeNum = 0;
                break;
            }
        }
    }
    
    if (primeNum) {
        printf("The number is prime.");
    } else {
        printf("The number is not prime.");
    }

    return 0;
}