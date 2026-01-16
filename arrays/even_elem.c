#include <stdio.h>

int main () {
    
    int niz[7] = {2, 4, 5, 6, 8, 1, 2};
    
    int brojac_parnih = 0; 
    
    int i;
    
    for (i = 0; i < 7; i++) {
        if (niz[i] % 2 == 0) {
            brojac_parnih += 1; 
        }
    }
    
    printf("%d", brojac_parnih);
    
    return 0;
}