#include <stdio.h>

int main() {
    int x, digit;
    int sum = 0;
    int temp = 0;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    do {
       digit = x % 10;
       sum += digit;
       temp++;
       x = x / 10;
    } while (x != 0);
    
    printf("The mean value is: %.2f", (double)sum / temp);

    return 0;
}