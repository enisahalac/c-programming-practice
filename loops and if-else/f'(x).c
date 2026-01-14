#include <stdio.h>

int main() {
	double a, b, c, derivacija;
	float x;

	printf("Unesite koeficijente a, b i c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if ((a >= -10 && a <= 10) && (b >= -10 && b <= 10) && (c >= -10 && c <= 10)) {
		printf("Unesite tacku x: ");
		scanf("%f", &x);
	} else {
		printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
		return 1;
	}
	
	derivacija = 2 * a * x + b;

	printf("Prva derivacija u tacki x=%g je %g.", x, derivacija);
	
	return 0;
}

