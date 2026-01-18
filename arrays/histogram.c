#include <stdio.h>

int main() {
	int i, broj;
	int brojac[101] = {0};

	printf("Unesite brojeve: ");
	while(1) {
			scanf("%d", &broj);

			if (broj == -1) {
				break;
			}

			if (broj < 0 || broj > 100) {
				printf("Brojevi moraju biti izmedju 0 i 100!\n");
				continue;
			}

			brojac[broj]++;
	}

	for (i = 0; i <= 100; i++) {
		if (brojac[i] > 0) {
			printf("Broj %d se javlja %d puta.\n", i, brojac[i]);
		}
	}
	
	return 0;
}
