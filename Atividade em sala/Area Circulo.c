#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float r, area;
	printf("insira o raio R do circulo");
	scanf("%f",&r);
	area = pi *(r*r);
	printf("A area do circulo de raio R %f = %f", r, area);
	
	float area_trapezio , base_maior , base_menor , altura;
	printf ("\ndigite a base maior: ");
	scanf("%f", &base_maior);
	printf ("digite a base menor: ");
	scanf ("%f", &base_menor);
	printf("digite a altura: ");
	scanf("%f", &altura);
	
	area_trapezio = ((base_maior + base_menor) * altura) / 2;
	
	printf("A area do trapezio e = %f", area_trapezio);
	
	return 0;
}
