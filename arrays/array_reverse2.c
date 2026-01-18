#include <stdio.h>

int main() {
	int n;

	do {
		printf("Unesite broj elemenata niza: ");
		scanf("%d", &n);

		if (n <= 0 || n > 50) {
			printf("Unos neispravan!\n");
		}
	} while (n <= 0 || n > 50);

	int i;
	float niz[50];

	printf("Unesite %d brojeva: ", n);
	for (i = 0; i < n; i++) {
		scanf("%f", &niz[i]);
	}

	for (i = n - 1; i >= 0; i--) {
		printf("%g", niz[i]);
		printf(", "); // uslov cak i na zadnjem mjestu
	}
	
	return 0;
}
