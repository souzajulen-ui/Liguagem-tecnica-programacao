#include <stdio.h>

int main() {

float inss(float bruto) {
    if (bruto <= 1412.00) return bruto * 0.075;
    else if (bruto <= 2666.68) return bruto * 0.09;
    else if (bruto <= 4000.03) return bruto * 0.12;
    else return bruto * 0.14;
}

float irpf(float base) {
    if (base <= 2259.20) return 0;
    else if (base <= 2826.65) return base * 0.075 - 169.44;
    else if (base <= 3751.05) return base * 0.15 - 381.44;
    else if (base <= 4664.68) return base * 0.225 - 662.77;
    else return base * 0.275 - 896.00;
}

    float valorHora, horas, bruto, descInss, descIrpf, liquido;

    printf("Valor da hora: ");
    scanf("%f", &valorHora);
    printf("Horas no mes: ");
    scanf("%f", &horas);

    bruto = valorHora * horas;
    descInss = inss(bruto);
    descIrpf = irpf(bruto - descInss);
    liquido = bruto - descInss - descIrpf;

    printf("\n==========================================\n");
    printf("   RECIBO DE PAGAMENTO (CONTRA-CHEQUE)\n");
    printf("==========================================\n");
    printf(" Salario Bruto:      R$ %.2f\n", bruto);
    printf(" (-) INSS:           R$ %.2f\n", descInss);
    printf(" (-) IRPF:           R$ %.2f\n", descIrpf);
    printf("------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:  R$ %.2f\n", liquido);
    printf("==========================================\n");

    return 0;
}
