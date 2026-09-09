#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Por favor, insira apenas valores positivos.\n");
        return 1;
    }

    printf("Notacao cientifica: %e\n", valor);

    return 0;
}
