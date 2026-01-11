#include <stdio.h>

int viseOdDvijeCifre (int niz[5]) {
    int i, brojac_cifara = 0;
    for (i = 0; i < 5; i++) {
        if (niz[i] > 99 || niz[i] < -99) {
            brojac_cifara++; 
        }
    }
    return brojac_cifara;
}

int main () {
    
    int niz[5] = {1, 22, 312, 9, 109};
    
    printf("%d", viseOdDvijeCifre(niz));
    
    return 0;
} 
