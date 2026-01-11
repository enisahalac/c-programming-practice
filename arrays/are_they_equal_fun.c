#include <stdio.h>

int jednakiElementi(int niz[6]) {
    int i, jednaki = 1;
    for (i = 1; i < 6; i++) {
        if (niz[i] != niz[0]) {
            jednaki = 0;
            return jednaki;
        }
    }
    return jednaki;
}

int main () {
    
    int niz[6] = {1, -1, 3, 9, 2, 0};
    
    int x = jednakiElementi(niz);
    
    printf("%s", (x == 0) ? "false" : "true");
  
    return 0;
} 