#include <stdio.h>

int main() {

float inss(float bruto) {
    if (bruto <= 1412.00) return bruto * 0.075;
    else if (bruto <= 2666.68) return bruto * 0.09;
    else if (bruto <= 4000.03) return bruto * 0.12;
    else return bruto * 0.14;
}

    float bruto;

    printf("Salario bruto: ");
    scanf("%f", &bruto);
    printf("INSS: %.2f\n", inss(bruto));

    return 0;
}
