#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
#define EPSILON 0.0001

int main() {
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double a, b, c, D;
	double ugao, cos_ugla, stepeni, m, s;
	double max;

	printf("Unesite koordinate tacke t1: ");
	scanf("%lf %lf", &x1, &y1);
	printf("Unesite koordinate tacke t2: ");
	scanf("%lf %lf", &x2, &y2);
	printf("Unesite koordinate tacke t3: ");
	scanf("%lf %lf", &x3, &y3);

	a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	b = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
	c = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));

	D = (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1);

	if (D == 0) {
		printf("Linija\n");
	} else {
		max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		if (fabs(a*a + b*b + c*c - 2*max*max) < EPSILON) {
			printf("Pravougli\n");
		}
		if ((fabs(a-b) < EPSILON) && (fabs(a-c) < EPSILON)) {
			printf("Jednakostranicni\n");
		} else if (fabs(a-b) < EPSILON || fabs(a-c) < EPSILON || fabs(b-c) < EPSILON) {
			printf("Jednakokraki\n");
		} else {
			printf("Raznostranicni\n");
		}
	}	

	if (fabs(D) < EPSILON) {
		ugao = 180;
	} else {
		if (max == a) {
			cos_ugla = (b*b + c*c - a*a) / (2*b*c);
		} else if (max == b) {
			cos_ugla = (a*a + c*c - b*b) / (2*a*c);
		} else {
			cos_ugla  = (a*a + b*b - c*c) / (2*a*b);
		}
		if (cos_ugla > 1) 
			cos_ugla = 1;
		if (cos_ugla < -1) 
			cos_ugla = -1;
		ugao = acos(cos_ugla)* 180 / PI;
	}

	long long ukupno_s;
	
	ukupno_s = floor(ugao * 3600 + 0.0001);
	stepeni = ukupno_s / 3600;
	m = (ukupno_s % 3600) / 60;
	s = ukupno_s % 60;
	
	printf("Najveci ugao ima %.0f stepeni, %.0f minuta i %.0f sekundi.", stepeni, m, s);
	
	return 0;
}