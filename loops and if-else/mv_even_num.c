#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, digit;
    int sum = 0;
    int temp = 0;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    do {
       digit = abs(x % 10);
       if (digit % 2 == 0) {
           sum += digit;
           temp++;
        }
       x = x / 10;
    } while (x != 0);
    
    if (temp > 0) {
        printf("The mean value for even numbers is: %.2f", (double)sum / temp);
    } else {
        printf("There is no even digits.");
    }

    return 0;
}