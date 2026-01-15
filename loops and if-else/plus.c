#include <stdio.h>

int main() {
	int N;

	do {
		printf("Unesite N: ");
		scanf("%d", &N);
		if (N % 2 == 0 && N != 0) {
			printf("N je parno!\n");
		} else if (N < 1) {
			printf("N je manje od 1!\n");
		}
	} while (N % 2 == 0 || N <= 1);
	  printf("\n");

	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (j  == ((N - 1) / 2) && j != i) {
				printf("|");
			} else if (i < ((N - 1) / 2) || i > ((N - 1) / 2)) {
				printf(" ");
			} else {
				if (j == 0) {
					printf("<");
				} else if (j == (N - 1)) {
					printf(">");
				} else if ((j >= 1 && j != ((N - 1) / 2)) && (j <= (N - 2) && j != ((N - 1) / 2))) {
					printf("-");
				} else if (j == ((N - 1) / 2)) {
					printf("+");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
