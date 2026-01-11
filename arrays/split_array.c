// Podijeli niz na dva niza: prvi – elementi manji ili jednaki prosjeku , drugi – elementi veći od prosjeka

#include <stdio.h>

int main() {
    
    int niz[6] = {1, 2, 2, 1, 5, 6};
    
    
    int i, suma = 0;
    float prosjek = 0; 
    
    for (i = 0; i < 6; i++) {
        suma += niz[i];
    }
    
    prosjek = (float)suma / 6;
    
    printf("%.2f\n", prosjek); 
    
    int brojac1 = 0, brojac2 = 0;
    
    for (i = 0; i < 6; i++) {
        if (niz[i] <= prosjek) {
            brojac1++;
        } else if (niz[i] > prosjek) {
            brojac2++;
        }
    }
    
    
    int nizManjiElementi[brojac1], j = 0, k = 0, nizVeciElementi[brojac2];
    
    printf("Niz manjih elemenata od prosjeka: ");
    for (i = 0; i < 6; i++) {
        if (niz[i] <= prosjek) {
            nizManjiElementi[j] = niz[i];
            printf("%d ", nizManjiElementi[j]);
            j++;
        } 
    } 
    
    printf("\n");
    
    printf("Niz vecih elemenata od prosjeka: ");
    for (i = 0; i < 6; i++) {
        if (niz[i] > prosjek) {
            nizVeciElementi[k] = niz[i];
            printf("%d ", nizVeciElementi[k]);
            k++;
        }
    }

    return 0;
}