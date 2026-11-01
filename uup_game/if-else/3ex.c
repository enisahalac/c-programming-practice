#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("Unesite tri cijela broja: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= -20 && a <= -8) {
		printf("Broj %d pripada intervalu [-20, -8]\n", a);
	} else if (a >= -1 && a <= 1) {
		printf("Broj %d pripada intervalu [-1, 1]\n", a);
	} else if (a >= 40 && a <= 50) {
		printf("Broj %d pripada intervalu [40, 50]\n", a);
	} else if (a >= 77 && a <= 101) {
		printf("Broj %d pripada intervalu [77, 101]\n", a);
	} else {
		printf("Broj %d ne pripada niti jednom intervalu\n", a);
	}

	if (b >= -20 && b <= -8) {
		printf("Broj %d pripada intervalu [-20, -8]\n", b);
	} else if (b >= -1 && b <= 1) {
		printf("Broj %d pripada intervalu [-1, 1]\n", b);
	} else if (b >= 40 && b <= 50) {
		printf("Broj %d pripada intervalu [40, 50]\n", b);
	} else if (b >= 77 && b <= 101) {
		printf("Broj %d pripada intervalu [77, 101]\n",b);
	} else {
		printf("Broj %d ne pripada niti jednom intervalu\n", b);
	}

	if (c >= -20 && c <= -8) {
		printf("Broj %d pripada intervalu [-20, -8]\n", c);
	} else if (c >= -1 && c <= 1) {
		printf("Broj %d pripada intervalu [-1, 1]\n", c);
	} else if (c >= 40 && c <= 50) {
		printf("Broj %d pripada intervalu [40, 50]\n", c);
	} else if (c >= 77 && c <= 101) {
		printf("Broj %d pripada intervalu [77, 101]\n", c);
	} else {
		printf("Broj %d ne pripada niti jednom intervalu\n", c);
	}

	if (((a >= -20 && a <= -8) && (b >= -20 && b <= -8) && (c >= -20 && c <= -8)) || ((a >= -1 && b <= 1) && (b >= -1 && b <= 1) && (c >= -1 && c <= 1)) || ((a >= 40 && a <= 50) && (b >= 40 && b <= 50) && (c >= 40 && c <= 50)) || ((a >= 77 && a <= 101) && (b >= 77 && b <= 101) && (c >= 77 && c <= 101))) {
		printf("Svi brojevi pripadaju jednom intervalu.");
	} else {
		printf("Svi brojevi ne pripadaju jednom te istom intervalu.");
	}
	
	return 0;
}