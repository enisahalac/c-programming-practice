#include <stdio.h>

int main() {
    
    int niz[4] = {2, 1, 3, -4};
    int i, jesu_li_jednaki = 1;
    
    for(i = 0; i < 4; i++) {
        if (niz[i] != niz[0]) {
            jesu_li_jednaki = 0;
            break;
        }
    }    
    
    printf("%s", (jesu_li_jednaki == 0) ? "False" : "True");

    return 0;
}





