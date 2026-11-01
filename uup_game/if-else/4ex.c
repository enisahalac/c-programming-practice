#include <stdio.h>

int main() {
	float a, b, c, f;
	float x;

	printf("Unesite koeficijente a, b i c: ");
	scanf("%f %f %f", &a, &b, &c);

	if ((a >= -10 && a <= 10) && (b >= -10 && b <= 10) && (c >= -10 && c <= 10)) {
		printf("Unesite tacku x: ");
		scanf("%f", &x);
		f = 2*a*x + b;
		printf("Prva derivacija u tacki x=%g je %g.", x, f);
	} else {
		printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
	}

	return 0;
}