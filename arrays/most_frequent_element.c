// Ucitaj niz i pronadji element koji se pojavljuje najvise puta. Ako ih ima vise ispisi bilo koji.

#include <stdio.h>

int najcesciElement (int niz[], int n) {
    int i, j;
    int maxBrojPojavljivanja = 0;
    int element = niz[0];

    for (i = 0; i < n; i++) {
        int brojac = 0;

        for (j = 0; j < n; j++) {
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
    int niz[] = {2, 1, 3, 2};
    int n = 4;
    
    printf("Element koji se pojavljuje najvise: %d", najcesciElement(niz, n));

    return 0;
    
}