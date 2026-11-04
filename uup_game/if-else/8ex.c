#include <stdio.h>

int main() {
	int n, suma = 0;
	int i;

	printf("Unesite n: ");
	
	if ((scanf("%d", &n)) != 1) {
		printf("Nije unesen broj!");
		return 0;
	}

	if (n <= 0) {
		printf("Broj nije prirodan!");
		return 0;
	} 
	
	for (i = 1; i <= n; i++) {
		suma += i*i; 
	}

	printf("Suma je: %d", suma);

	return 0;
}