#include <stdio.h>
#include <math.h>

int powNumRecursion(int x, int n) {
    if (n == 0) {
        return 1;
    }

   
    return  x * powNumRecursion(x, n-1);
}

int main () {
    int x = 2;
    int n = 4;

    int m = powNumRecursion(x, n);

    printf("%d", m);

    return 0;
}