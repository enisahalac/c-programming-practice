#include <stdio.h>

int main () {
    int x, y = 0, z;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    do {
        z = x % 10;
        y = y * 10 + z;
        x = x / 10;
    } while (x != 0);
    
    printf("New number: %d ", y);
    
    return 0;
}
