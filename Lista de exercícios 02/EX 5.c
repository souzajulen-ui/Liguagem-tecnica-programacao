#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	 float g, r, p;

    p = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    r = g * p / 180;

    printf("Angulo em radianos: %.4f\n", r);
    
	return 0;
}
