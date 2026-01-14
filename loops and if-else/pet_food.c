#include <stdio.h>

int main() {
    int h, m, dan;
    float jelo_za_psa, meso, ostatak_hrane, krekeri;
    float jelo_za_macku;
    float jelo_za_kornjacu;

    printf("Unesite trenutno vrijeme (hh:mm): ");
    scanf("%d:%d", &h, &m);

    printf("Unesite redni broj dana u sedmici: ");
    scanf("%d", &dan);

    if (h < 8) {
        printf("Ljubimci ne smiju jesti prije 8:00h!");
        return 1;
    }

    if (h < 18) {
        jelo_za_psa = ((h + m + dan) / 34.0);
        meso = jelo_za_psa / 3.0;
        ostatak_hrane = jelo_za_psa - meso;
        printf("Pas ce pojesti %.2fkg hrane, od toga %.2fkg mesa i %.2fkg ostale hrane.\n", jelo_za_psa, meso, ostatak_hrane);
    } else {
        krekeri = dan * 7.0;
        printf("Pas ce dobiti %.f kreker/a.\n", krekeri);
    }

    jelo_za_macku = ((2.0 * h) / 40.0) + (dan / 7.0);
    printf("Macka ce pojesti %.2fkg hrane.\n", jelo_za_macku);

    if (dan == 4) {
        jelo_za_kornjacu = ((7.0 + h) / (dan + 154.0));
        printf("Kornjaca ce pojesti %.2fkg hrane. Posto je cetvrtak, dobit ce kalcij uz obrok.", jelo_za_kornjacu);
    } else {
        jelo_za_kornjacu = ((7.0 + h) / (dan + 154.0));
        printf("Kornjaca ce pojesti %.2fkg hrane.", jelo_za_kornjacu);
    }

    return 0;
}