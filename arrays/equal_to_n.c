#include <stdio.h>

int main () {
    
    int niz[5] = {1, 2, 3, 1, 1};
    int n, i;
    int jednaki_elementi = 0;
    
    printf("Unesi broj: ");
    scanf("%d", &n);
    
    for (i = 0; i < 5; i++) {
        if (niz[i] == n) {
            jednaki_elementi++;
        }
    }
    
    printf("%d", jednaki_elementi);
    
    return 0;
} 