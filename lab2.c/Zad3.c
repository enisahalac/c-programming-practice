#include <stdio.h>

int main () {
    int n = 6;
    
    if (n % 13 == 0) {
        printf("Data vrijednost je djeljiva sa trinaest.");
    } else {
        printf("Data vrijednost nije djeljiva sa trinaest.");
    }

    return 0;
}