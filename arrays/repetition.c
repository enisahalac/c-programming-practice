#include <stdio.h>

int main() {
	int N;

	do {
		printf("Unesite broj clanova niza: ");
		scanf("%d", &N);
	
	} while(N > 100 || N <= 0);

	int i, j;
	float niz[100];

	printf("Unesite niz: ");
	for (i = 0; i < N; i++) {
		scanf("%f", &niz[i]);
	}

	for (i = 0; i < N; i++) {
		int brojac = 0;
		for (j = 0; j < N; j++) {
			if (niz[i] == niz[j]) {
				brojac++;
			}
			
		}
		if (brojac != 2) {
			printf("NE");
			return 0;			
		}
			
	}
	
	printf("DA");
	
	return 0;
}
