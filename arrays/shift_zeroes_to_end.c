// Pomjeri sve nule na kraj niza, a zadrzi redoslijed ostalih elemenata.

#include <stdio.h>

void pomjeriNule (int niz[], int n) {
    int i, j;
    int skladiste[n], k = 0;
    
    for (i = 0; i < n; i++) {
        if (niz[i] != 0) {
            skladiste[k] = niz[i];
            k++;
        }
    }
    
    while (k < n) {
        skladiste[k] = 0;
        k++;
    }

    for (i = 0; i < k; i++) {
        printf("%d ", skladiste[i]);
    }
}

int main() {
    int niz[] = {0, 1, 2, 3, 1};
    int n = 5;
    
    pomjeriNule(niz, n);

    return 0;
    
}