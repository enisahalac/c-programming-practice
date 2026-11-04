#include <stdio.h>
#include <math.h>

int main() {
	double ugao, normalizovani_ugao;
	int stepen, m, s;

	printf("Unesite stepene: ");
	scanf("%lf", &ugao);

	if (ugao < - 1000 || ugao > 1000) {
		printf("Unos nije ispravan!");
		return 0;
	}

	normalizovani_ugao = fmod(ugao, 360);

	if (normalizovani_ugao < 0) {
		normalizovani_ugao += 360;
	}
	
	stepen = (int)normalizovani_ugao;
	m = (int)((normalizovani_ugao - stepen) * 60);
	s = (int)((normalizovani_ugao - stepen) * 3600 - m * 60);
	
	printf("%g = %d^ %d' %d''", ugao, stepen, m, s); 

	return 0;
}