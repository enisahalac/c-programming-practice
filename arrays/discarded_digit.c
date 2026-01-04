#include <stdio.h>

int main() {
     
    int niz[5], i, x;

    for (i = 0; i < 5; i++) {
        printf("Unesi element %d: ", i + 1);
        scanf("%d", &niz[i]);
    }

    printf("Unesi broj koji zelis izbaciti: ");
    scanf("%d", &x);

    printf("Novi niz: ");
    for (i = 0; i < 5; i++) {
        if (niz[i] != x) {
            printf("%d", niz[i]);
        }
    }

    return 0;
}