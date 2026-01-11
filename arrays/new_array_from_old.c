// addition: multiply them by 2

#include <stdio.h>

int main () {
    
    int niz[5] = {1, 2, 3, 4, -6};
    int novi_niz[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        novi_niz[i] = niz[i] * 2;
        printf("%d ", novi_niz[i]);
    }
    
    return 0;
} 
