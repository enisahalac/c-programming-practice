#include <stdio.h>

int main() {
    
    int niz[5] = {12, 3, 4, 1, -16};
    int brojac_vecih = 0;
    int i;
    
    for (i = 1; i < 5; i++) {
        if (niz[i] > niz[0]) {
            brojac_vecih += 1;
        }
    }
    
    printf("%d", brojac_vecih);

    return 0;
}

