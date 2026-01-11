// Ucitaj niz i pronadji element koji se pojavljuje najvise puta. Ako ih ima vise ispisi bilo koji.

#include <stdio.h>

int najcesciElement (int niz[7]) {
    int i, j;
    int maxBrojPojavljivanja = 0;
    int element = niz[0];

    for (i = 0; i < 7; i++) {
        int brojac = 0;

        for (j = 0; j < 7; j++) {
            if (niz[i] == niz[j]) {
                brojac++;
            }
        }

        if (brojac > maxBrojPojavljivanja) {
            maxBrojPojavljivanja = brojac;
            element = niz[i];
        }
    }

    return element;
}

int main() {
    
    int niz[7] = {2, 1, 2, 1, 4, 4, 4};
    

    printf("Element koji se pojavljuje najvise: %d", najcesciElement(niz));

    return 0;
    
}