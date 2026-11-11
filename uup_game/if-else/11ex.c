#include <stdio.h>

int main() {
	int N, i, j;

	do {
		printf("Unesite N: \n");
		scanf("%d", &N);
		if (N % 2 == 0 && N != 0) {
			printf("N je parno!\n");
		} else if (N <= 1) {
			printf("N je manje od 1!\n");
		}
	} while ((N % 2 == 0 || N <= 1));
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i == N / 2) {
				if (j == i) {
					printf("+");
				} else if (j == 0) {
					printf("<");
				} else if (j == N - 1){
					printf(">");
				} else {
					printf("-");
				}
			} else if (j == N / 2) {
				printf("|");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}