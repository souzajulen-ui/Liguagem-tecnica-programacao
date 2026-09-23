#include <stdio.h>

int main() {
float irpf(float base) {
    if (base <= 2259.20) return 0;
    else if (base <= 2826.65) return base * 0.075 - 169.44;
    else if (base <= 3751.05) return base * 0.15 - 381.44;
    else if (base <= 4664.68) return base * 0.225 - 662.77;
    else return base * 0.275 - 896.00;
}
    float base;

    printf("Salario base: ");
    scanf("%f", &base);
    printf("IRPF: %.2f\n", irpf(base));

    return 0;
}
