#include <stdio.h>

int main() {
    
    int niz[6] = {0, -1, 3, -9, 4, 5};
    
    int i; 
    
    for (i = 0; i < 6; i++) {
        if (niz[i] > 0) {
            printf("%d ", 1);
        }
        else {
            printf("%d ", niz[i]);
        }
    }
    
    return 0;
}

