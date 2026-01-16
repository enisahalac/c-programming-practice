#include <stdio.h>

int main () {
    int n = 5;
    int i;
    
    for (i = n; i <= n * n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}