#include<stdio.h>

int main () {
    int n = 8;
    int i = n;

    while (i >= 1) {
        printf("%d\n", i);
        i -= 4;
    }

    return 0;
}