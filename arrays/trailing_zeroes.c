// pomjeri nule ali zadrzi redoslijed!

#include <stdio.h>

void pomjeriNule (int niz[6]) {
    int i, j;
    int skladiste[6], k = 0;
    
    for (i = 0; i < 6; i++) {
        if (niz[i] != 0) {
            skladiste[k] = niz[i];
            k++;
        }
    }
    
    while (k < 6) {
        skladiste[k] = 0;
        k++;
    }

    for (i = 0; i < k; i++) {
        printf("%d ", skladiste[i]);
    }
}

int main() {
    
    int niz[6] = {1, 2, 0, 0, 3, 0};
    
    pomjeriNule(niz);

    return 0;
    
}