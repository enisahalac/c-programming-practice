#include <stdio.h>
#define MAX 100

int broj_putanja (int niz[MAX], int n, int k, int nova_pozicija) {
    
    if (n == 1)
        return 1;

    int ukupno_putanja = 0;
    int skok;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0 || i == 1) {
            ukupno_putanja += broj_putanja(niz, n, k, nova_pozicija);
        }
    }

    return ukupno_putanja;
}

int main() {
    int n, k;
    int niz[MAX];

    printf("Unesite duzinu niza i maksimalni skok k: ");
    scanf("%d %d", &n, &k);

    printf("Unesite niz (0 i 1):\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
}

// Provjeravamo da li pocetna pozicija omogucava pocetak
    if (niz[0] == 0) {
        printf("Broj prohodnih putanja: 0\n");
        return 0;
    }
    
    int rezultat = broj_putanja(niz, n, k, 0);

    printf("Broj prohodnih putanja: %d\n", rezultat);
    
    return 0;
}
