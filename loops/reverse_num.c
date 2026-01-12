#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int temp = 0;
    
    printf("Enter a num: ");
    scanf("%d", &n);
    
    do {
        temp = abs(n % 10);
        printf("%d", temp);
        n = n / 10;
    } while (n != 0);

    return 0;
}
