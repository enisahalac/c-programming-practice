#include <stdio.h>

int main () {
    
    int niz[7] = {20, -3, 4, 39, 3, 1, 9}; 
    
    int i;
    
    for (i = 0; i < 7; i++) {
        if (i % 2 == 1) {
            printf("%d ", niz[i]);
        }
    }
    
    return 0;
}