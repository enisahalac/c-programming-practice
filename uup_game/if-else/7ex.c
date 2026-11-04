#include <stdio.h>

int main() {
	int n, i, j;
	int prost_broj, suma = 0;

	printf("Unesite n: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		prost_broj = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				prost_broj = 0;
				break;
			}
		}
		if (prost_broj == 1) {
			printf("%d\n", i);
			suma += i;
		}
	}

	printf("Suma je: %d", suma);

	return 0;
}
