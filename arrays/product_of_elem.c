#include <stdio.h>

int main () {

    int niz[4] = {2, 4, 5, 6};
    int i, proizvod = 1;

    for (i = 0; i < 4; i++) {
        proizvod *= niz[i]; 
    }

    printf("%d", proizvod);
    
    return 0;
}