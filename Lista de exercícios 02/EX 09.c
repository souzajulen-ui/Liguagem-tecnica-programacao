#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tempo, velocidade, distancia;
    float litros;

    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%d", &tempo);

    printf("Digite a velocidade media (km/h): ");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("%.3f\n", litros);

    return 0;
}
