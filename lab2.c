#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, d, x1, x2;
	printf("Wwedite koeficient a: \n");
	scanf("%f", &a);
	printf("Wwedite koeficient b: \n");
	scanf("%f", &b);
	printf("Wwedite koeficient c: \n");
	scanf("%f", &c);
	if (a == 0) {
		printf("Uravnenie ne yavlyaetsa kvadratnim");
	}
	else {
		d = (b * b) - (4 * a * c);
		if (d < 0) {
			printf("Net korney\n");
			return 1;
		}
		else {
			d = sqrt(d);
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			printf("x1 = %f, x2 = %f\n", x1, x2);
		}
	}
	return 0;
}
