// Izdvojiti najveci i najmanji element iz niza 

#include <stdio.h>

int main() {

     int niz[4], i, max, min;

     for (i = 0; i < 4; i++) {
        printf("Unesi element %d: ", i+1);
        scanf("%d", &niz[i]);
    }
    
    max = niz[0];
    min = niz[0];

    for (i = 1; i < 4; i++) {
        if (niz[i] > max)
            max = niz[i];
        if (niz[i] < min)
            min = niz[i];
    }

    printf("Najveci element iz niza je %d.\n", max);
    printf("Najmanji element iz niza je %d.", min);
     
     return 0;
}