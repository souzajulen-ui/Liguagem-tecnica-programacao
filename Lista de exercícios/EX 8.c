#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    float x1, y1, x2, y2;
    float dx, dy, distancia;

    printf("Digite as coordenadas x1 e y1 do P1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas x2 e y2 do P2: ");
    scanf("%f %f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distancia = sqrtf((dx * dx) + (dy * dy));

    printf("Distancia: %.4f\n", distancia);

    return 0;
}
