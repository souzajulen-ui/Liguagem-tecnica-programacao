//Exercício 5
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

//Exercício 6

#include <stdio.h>
#include <math.h>

void voo(float x, float y, float vx, float vy, float t) {
    vx = vx - 0.5 * vx * 0.01;
    vy = vy - (9.8 + 0.5 * vy) * 0.01;
    x = x + vx * 0.01;
    y = y + vy * 0.01;
    t = t + 0.01;

    if (y <= 0) {
        printf("Alcance: %.2f m\n", x);
        printf("Tempo: %.2f s\n", t);
    } else {
        voo(x, y, vx, vy, t);
    }
}

int main() {
    float v0, graus, rad;

    printf("Velocidade inicial: ");
    scanf("%f", &v0);
    printf("Angulo: ");
    scanf("%f", &graus);

    rad = graus * (3.14159 / 180);
    voo(0, 0, v0 * cos(rad), v0 * sin(rad), 0);

    return 0;
}

//Exercício 7

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

//Exercício 8

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

//Exercício 9

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
