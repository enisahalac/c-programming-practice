#include <stdio.h>

int main () {
    
    int niz[5] = {23, 1, 456, 890, -333};

    
    int  i, brojac_cifara = 0;
    
    for (i = 0; i < 5; i++) {
        if (niz[i] > 99 || niz[i] < -99) {
            brojac_cifara += 1; 
        }
    }
    
    printf("%d", brojac_cifara);
    
    return 0;
}