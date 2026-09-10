#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int total, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = (total % 3600) % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
