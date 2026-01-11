#include <stdio.h>

int main () {
    
    int niz[7] = {1, -7, 3, -5, -21, -5, -7}; 
    int i, zadnji_pozitivni = 0;
    
    for (i = 0; i < 7; i++) {
        if (niz[i] > 0) {
            zadnji_pozitivni = niz[i];
        }
    }
    
    printf("%d", zadnji_pozitivni);
    
    return 0;
}