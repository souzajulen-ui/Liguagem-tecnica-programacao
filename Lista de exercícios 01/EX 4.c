#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float salarioFixo, totalVendas, totalReceber;

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o total em vendas: ");
    scanf("%f", &totalVendas);

    totalReceber = salarioFixo + (totalVendas * 0.15f);

    printf("TOTAL = R$ %.2f\n", totalReceber);

    return 0;
}
