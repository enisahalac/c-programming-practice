#include <stdio.h>

int main () {
    
    int niz[7] = {-2, -4, 5, 6, 8, -1, 2};
    
    int i;
    
    int brojac_pozitivnih = 0; 
    
    for (i = 0; i < 7; i++) {
        if (niz[i] > 0) {
            brojac_pozitivnih += 1;
        }
    }
    
    printf("%d", brojac_pozitivnih);
    
    return 0;
}