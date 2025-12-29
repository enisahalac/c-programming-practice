#include <stdio.h>
#define BROJ_EL 5

int main() {
    
    int niz[BROJ_EL], i;
    
    for (i = 0; i < BROJ_EL; i++) {
        printf("Unesi element %d: ", i+1);
        scanf("%d", &niz[i]);
    }
    
    for(i = 0; i < BROJ_EL; i++) {
        printf("%d", niz[i]);
        
        if (i < BROJ_EL - 1) {
            printf(",");
        
        }
    
    }

    return 0; 
}
     


