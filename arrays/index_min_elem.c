#include <stdio.h>

int main() {
    
    int niz[5] = {12, -3, 2, 1, 16};
    int min = niz[0];
    int i, j;
    
    for (i = 1; i < 5; i++) {
        if (niz[i] < min) {
            min = niz[i];
            j = i;
        }
    } 
    
    printf("%d", j);

    return 0;
}

