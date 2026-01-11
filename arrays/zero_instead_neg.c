#include <stdio.h>

int main() {
    
    int niz[7] = {1, -2, -5, 3, -99, 2, -87};
    int i;
    
    for (i = 0; i < 7; i++) {
        if (niz[i] < 0) {
            niz[i] = 0; 
            printf("%d", niz[i]);
        } else {
            printf("%d", niz[i]);
        }
    }

    return 0;
}