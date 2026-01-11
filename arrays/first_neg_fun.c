#include <stdio.h>

int prviNegativni(int niz[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (niz[i] < 0) {
            return niz[i];
        }
    }
    return 0;
}

int main () {
    
    int niz[5] = {1, 9, 2, -4, -3};
    
    int x = prviNegativni(niz);
    
    printf("%d", x);
    
    return 0;
} 
