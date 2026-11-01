#include<stdio.h>

int main () {
    int heksadecimalniBroj = 0x2A; /*prefiks 0x se koristi kod heksadecimalnog zapisa, vrijednost varijable ce biti cijeli broj pa je tip integer*/
    double eksponencijalnaVrijednost = 123e3; /*123 x 10^3, double jer moze doci decimalna vrijednost*/
    double decimalni_broj = 3.2376540986; /*float nije precizan tip, mozda ne bi sve decimale prikazao*/
    char cijeliBroj[4] = "003"; /*nacin kako da unesemo cijeli broj kroz string (niz od 4 elementa jer kraj stringa zavrsava sa '/0') jer bi int cijeliBroj = 007; oznacavalo oktalni zapis koji pocinje nulama*/
    int zero = 0; /*ocekuje se vrijednost 0 pa je integer*/ 

    return 0;
}