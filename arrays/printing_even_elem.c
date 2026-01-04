#include <stdio.h>

int main () {
    
    int niz[7] = {2, 4, 5, 6, 8, 1, 2};
    
    int i;
    
    for (i = 0; i < 7; i++) {
        if (niz[i] % 2 == 0) {
            printf("%d ", niz[i]); 
        }
    }
    
    return 0;
}