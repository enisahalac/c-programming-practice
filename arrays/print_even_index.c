#include <stdio.h>

int main () {
    
    int niz[6] = {1, 3, -9, 40, 20, 50}; 
    int i;
    
    for (i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            printf("%d ", niz[i]);
        }
    }
    
    return 0;
}