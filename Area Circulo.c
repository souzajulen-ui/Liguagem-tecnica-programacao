#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float r, area;
	
	printf("insira o raio R do circulo");
	scanf("%f",&r);
	
	area = pi *(r*r);
	
	printf("A area do circulo de raio R %f = %f", r, area);

	return 0;
}
