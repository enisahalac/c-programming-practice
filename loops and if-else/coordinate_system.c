#include <stdio.h>

int main() {
	int n;
	int x, y;
	int i, j;

	do {
		printf("Unesite dimenziju: ");
		scanf("%d", &n);
		
		if (n == -1) {
			printf("Zavrsio!");
			return 1;
		}
		
		printf("Unesite (x y): ");
		scanf("%d %d", &x, &y);

		if (x > 2 * n || y > n || x < -(2 * n) || y < -(n)) {
			printf("Koordinate tacke izvan opsega!");
			return 1;
		}

			int tacka_i = ((2 * n + 2) / 2) - y;
			int tacka_j = ((2 * 2 * n + 2) / 2) + x;
			
		for(i = 0; i <= 2 * n + 2; i++) {
			for (j = 0; j < 2 * 2 * n + 3; j++) {
				if (i == tacka_i && j == tacka_j) {
					printf("x");
				} else if (i == 0 && j == (2 * 2 * n + 2) / 2) {
					printf("^");
				} else if (i == 2 * n + 2 && j == (2 * 2 * n + 2) / 2) {
					printf("v");
				} else if ((j == (2 * 2 * n + 2) / 2 && i < ((2 * n + 2) / 2)) || (j == (2 * 2 * n + 2) / 2 && i > ((2 * n + 2) / 2))) {
					printf("|");
				} else if (i == ((2 * n + 2) / 2) && j == 0) {
					printf("<");
				} else if (i == ((2 * n + 2) / 2) && j == (2 * 2 * n + 2)) {
					printf(">");
				} else if ((i == ((2 * n + 2) / 2) && j < ((2 * 2 * n + 2) / 2)) || (i == ((2 * n + 2) / 2) && j > ((2 * 2 * n + 2) / 2))) {
					printf("-");
				} else if (i == ((2 * n + 2) / 2) && j == (2 * 2 * n + 2) / 2) {
					printf("+");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}
		
	} while (n != -1);

	return 0;
}
