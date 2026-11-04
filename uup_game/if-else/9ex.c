#include <stdio.h>

int main() {
	double baza, eksponent;
	int i;
	double rezultat = 1;

	printf("Unesite bazu: ");

	if ((scanf("%lf", &baza) != 1)) {
		printf("Nije unesen broj!");
		return 0;
	}

	printf("Unesite eksponent: ");

	if ((scanf("%lf", &eksponent) != 1)) {
		printf("Nije unesen broj!");
		return 0;
	} else if (eksponent != (int)eksponent) {
		printf("Uneseni broj nije cjelobrojan!");
		return 0;
	}

	for (i = 1; i <= ((eksponent < 0) ? -eksponent : eksponent); i++) {   
		rezultat *= baza;
	}

	if (eksponent < 0) {
		rezultat = 1 / rezultat;
	}

	printf("%g^%g = %g", baza, eksponent, rezultat);

	return 0;
}