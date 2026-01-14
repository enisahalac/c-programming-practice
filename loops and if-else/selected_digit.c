#include <stdio.h>

int main() {
	int n, c, brojac_cifara = 0;

	printf("Unesite broj: ");
	scanf("%d", &n);

	if (n <= -1000000 || n >= 1000000) {
		printf("Neispravan unos!");
		return 1;
	}

	if (n < 0) {
		n = -n;
	}
	
	if (n >= 0 && n <= 9) {
		brojac_cifara = 1;
	} else if (n >= 10 && n <= 99) {
		brojac_cifara = 2;
	} else if (n >= 100 && n <= 999) {
		brojac_cifara = 3;
	} else if (n >= 1000 && n <= 9999) {
		brojac_cifara = 4;
	} else if (n >= 10000 && n <= 99999) {
		brojac_cifara = 5;
	} else if (n >= 100000 && n <= 999999) {
		brojac_cifara = 6;
	} else if (n == 1000000) {
		brojac_cifara = 7;
	}

	printf("Koju cifru zelite kvadrirati: ");
	scanf("%d", &c);

	if (c < 1 || c > brojac_cifara) {
		printf("Neispravna cifra!");
		return 1;
	}

	if (brojac_cifara == 1) {
		c = n;
	} else if (brojac_cifara == 2) {
		if (c == 1) {
			c = n / 10;
		} else {
			c = n % 10;
		}
	} else if (brojac_cifara == 3) {
		if (c == 1) {
			c = n / 100;
		} else if (c == 2) {
			c = (n / 10) % 10;
		} else {
			c = n % 10;
		}
	} else if (brojac_cifara == 4) {
		if (c == 1) {
			c = n / 1000;
		} else if (c == 2) {
			c = (n / 100) % 10;
		} else if (c == 3) {
			c = (n / 10) % 10;
		} else {
			c = n % 10;
		}
	} else if (brojac_cifara == 5) {
		if (c == 1) {
			c = n / 10000;
		} else if (c == 2) {
			c = (n / 1000) % 10;
		} else if (c == 3) {
			c = (n / 100) % 10;
		} else if (c == 4) {
			c = (n / 10) % 10;
		} else {
			c = n % 10;
		}
	} else if (brojac_cifara == 6) {
		if (c == 1) {
			c = n / 100000;
		} else if (c == 2) {
			c = (n / 10000) % 10;
		} else if (c == 3) {
			c = (n / 1000) % 10;
		} else if (c == 4) {
			c = (n / 100) % 10;
		} else if (c == 5) {
			c = (n / 10) % 10;
		} else {
			c = n % 10;
		}
	} else if (brojac_cifara == 7) {
		if (c == 1) {
			c = n / 1000000;
		} else if (c == 2) {
			c = (n / 100000) % 10;
		} else if (c == 3) {
			c = (n / 10000) % 10;
		} else if (c == 4) {
			c = (n / 1000) % 10;
		} else if (c == 5) {
			c = (n / 100) % 10;
		} else if (c == 6){
			c = (n / 10) % 10;
		} else {
			c = n % 10;
		}
	}

	printf("Izdvojena cifra je %d, a njen kvadrat je %d", c, c*c);	
	
	return 0;
}


