#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float raio, volume;
    float pi = 3.14159f;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0f / 3.0f) * pi * (raio * raio * raio);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}
