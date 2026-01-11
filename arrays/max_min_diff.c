#include <stdio.h>

int main () {
    
    int niz[4] = {2, 1, -6, 8}; 
    
    int i, max = niz[0], min = niz[0]; 
    
    for (i = 1; i < 4; i++) {
        if (max < niz[i] ) {
            max = niz[i]; 
        }
        if (niz[i] < min) {
            min = niz[i]; 
        }
    }
    
    printf("%d", max - min);
    
    return 0;
}