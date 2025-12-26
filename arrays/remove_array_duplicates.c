// Iz niza ukloni sve duplikate, ali zadrži redoslijed elemenata.

#include <stdio.h>

void ukloniDuplikate(int niz[], int n) {
    int skladiste[n];
    int i, j;
    int k = 0;   

    for (i = 0; i < n; i++) {
        int postoji = 0;

        for (j = 0; j < k; j++) {
            if (niz[i] == skladiste[j]) {
                postoji = 1;
                break;
            }
        }

        if (!postoji) {
            skladiste[k] = niz[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d ", skladiste[i]);
    }
}

int main() {
    int niz[] = {2, 1, 9, 9, -1, 2};
    int n = 6;
    ukloniDuplikate(niz, n);
    
    return 0;
    
}