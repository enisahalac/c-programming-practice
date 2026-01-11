// same as Task: equal_to_n, addition: the user enters an array, not fixed

#include <stdio.h>

int main () {
    
    int niz[50];
    int n, i, k;
    int jednaki_elementi = 0;
    
    printf("Ukupan broj elemenata u nizu: ");
    scanf("%d", &n);
    
    if (n > 50 || n <= 0) {
        printf("Neispravan broj elemenata niza.");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("Unesi element %d: ", i+1);
        scanf("%d", &niz[i]);
    }
    
    printf("Unesi broj: ");
    scanf("%d", &k);
    
    for (i = 0; i < n; i++) {
        if (k == niz[i]) {
            jednaki_elementi += 1;
        }
    }
    
    if (jednaki_elementi == 1) {
        printf("Broj %d u nizu ima jedno ponavljanje.", k);
    } else {
         printf("Broj %d u nizu ima %d ponavljanja.", k, jednaki_elementi);
    }
        
    return 0;
} 
