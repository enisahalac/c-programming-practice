#include <stdio.h>

int main() {
	int n;

	printf("Unesite n: ");
	scanf("%d", &n);

	if (n < 2) {
		printf("Neispravan unos");
		return 1;
	}

	int i, j;

	for (i = 1; i < n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = 1; j <= 2 * (n - i) + 1; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = 1; j <= 2 * (n - i) + 1; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
