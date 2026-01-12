#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c;
    int sum = 0;
    
    printf("Enter a num: ");
    scanf("%d", &n);
    
    do {
        c = abs(n % 10);
        sum += c;
        n = n / 10;
    } while (n != 0);
    
    printf("%d", sum);

    return 0;
}