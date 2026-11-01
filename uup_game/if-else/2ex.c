#include <stdio.h>

int main() {
	int a, b, c, D;

	scanf("%d %d %d", &a, &b, &c);
	
	D = (a+b)*c;

	printf("Rezultat operacije je (%d+%d)*%d=%d.", a, b, c, D);


	return 0;
}
