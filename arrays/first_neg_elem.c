#include <stdio.h>

int main () {
    
    int niz[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Unesi element %d: ", i + 1);
        scanf("%d", &niz[i]);
    }
    
    for (i = 0; i < 5; i++) {
        if (niz[i] < 0) {
            printf("%d", niz[i]);
            break;
        }
    }
    
    return 0;
}