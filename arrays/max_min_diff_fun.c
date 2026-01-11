#include <stdio.h>

int razlika(int niz[5]) {
    int i, max = 0, min = 0;
    for (i = 0; i < 5; i++) {
        if (niz[i] > max) {
            max = niz[i];
        } else if (niz[i] < min) {
            min = niz[i];
        }
    }
    return max - min;
}

int main () {
    
    int niz[5] = {-1, 9, 2, 0, -3};
    
    int x = razlika(niz);
    
    printf("%d", x);
    
    return 0;
} 