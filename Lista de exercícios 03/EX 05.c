#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor / 100 > 0) printf("%dx R$100\n", valor / 100);
    valor = valor % 100;

    if (valor / 50 > 0) printf("%dx R$50\n", valor / 50);
    valor = valor % 50;

    if (valor / 10 > 0) printf("%dx R$10\n", valor / 10);
    valor = valor % 10;

    if (valor / 5 > 0) printf("%dx R$5\n", valor / 5);
    valor = valor % 5;

    if (valor / 2 > 0) printf("%dx R$2\n", valor / 2);
    valor = valor % 2;

    if (valor > 0) printf("%dx R$1\n", valor);

    return 0;
}
