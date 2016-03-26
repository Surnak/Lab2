#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float a,b,c;
	printf("Wwedite koeficient a: \n");
	scanf("%f",&a);
	printf("Wwedite koeficient b: \n");
	scanf("%f",&b);
	printf("Wwedite koeficient c: \n");
	scanf("%f",&c);
	if (a==0)
	{
		printf("Uravnenie ne yavlyaetsa kvadratnim");
	}
	else 
	{
		d = b*b-4*a*c;
		d = sqrt(d);
		if (d < 0)
		{
			printf("Net korney\n");
		}
	return 0;
}
