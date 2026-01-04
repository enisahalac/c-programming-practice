#include <stdio.h>

int main() {
     
    int i, niz[5];

    printf("Unesi niz:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &niz[i]);

    printf("Niz unazad: ");
    for(i = 4; i >= 0; i--)
        printf("%d", niz[i]);

    return 0;
}