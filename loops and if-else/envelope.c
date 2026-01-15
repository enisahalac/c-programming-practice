#include <stdio.h>

int main() {
	int n;
  	int i, j;
  	
	printf("Unesite broj n: ");
  	scanf("%d", &n);
  
  	if (n % 2 == 1 || n < 4 || n >= 100) {
    	printf("Broj je van trazenog opsega.");
    	return 1;
  	} else {
    	for (i = 0; i < n; i++) {
      		for (j = 0; j < 2 * n; j++) {
        		if (i == 0 || i == n - 1 || j == 0 || j == 2 * n - 1) {
					printf("+");
				} else if (i == n / 2 - 1 && j >= ((2 * n - (n + 2)) / 2) && j <= (((2 * n - (n + 2)) / 2) + (n + 2) - 1)) {
					printf("+");
				} else if (i < n / 2 - 1 && (j == i || j == (2 * n - 1 - i))) {
					printf("+");
				} else {
					printf(" ");
				}
    		}
			printf("\n");
		}
	}
	
 	return 0;
}