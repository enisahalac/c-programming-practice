#include <stdio.h>

int main () {
    
    int niz[6] ={1, 1, 1, 1, 1, 1};
    int i, suma = 0;
    double prosjek_niza, t = 0;
    
    // prosjek niza -> zbir svih elemenata niza podijeljen sa brojem elemenata
    
    for (i = 0; i < 6; i++) {
        suma += niz[i]; 
    }
    
    prosjek_niza = (double)suma / 6;
    
    for (i = 0; i < 6; i++) {
        if (niz[i] < prosjek_niza) {
            printf("%d ", niz[i]);
            t = 1;
        }
    }

    if (t == 0) {
        printf("Ne postoje elementi manji od prosjeka niza.");
    }

    return 0;
} 
