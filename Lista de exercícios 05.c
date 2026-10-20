//EXERCÍCIO 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numero[100], i, j, aux;

    for(i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\n Numeros na ordem inversa da digitacao");
    for(i = 100 - 1; i >= 0; i--) {
        printf("\nNumero %d: %d", i + 1, numero[i]);
    }
    printf("\n");

    for (i = 0; i < 100 - 1; i++) {
        for (j = 0; j < 100 - 1 - i; j++) {
            if (numero[j] < numero[j + 1]) {
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }

    printf("\nOrdenados do maior para o menor:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", numero[i]);
    }
    printf("\n");

    return 0;
}

//EXERCÍCIO 2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double valor, a;
    int n = 0;

    printf("Digite um valor positivo : ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Considere somente valores positivos.\n");
        return 1;
    }

    a = valor;

    for (; a >= 10.0; n++) {
        a = a / 10.0;
    }

    for (; a < 1.0; n--) {
        a = a * 10.0;
    }

    printf("Notacao cientifica: %lf x 10^%d\n", a, n);

    return 0;
}


//EXERCICIO 3
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i, total = 0;
    int resto[8];

    printf("Digite um numero n (1 a 64): ");
    scanf("%d", &n);

    if (n <= 0 && n > 64) {
        printf("Valor invalido! n deve ser positivo e menor ou igual a 64.\n");
        return 1;
    }

    for (; n > 0; n = n / 2) {
        resto[total] = n % 2;
        total++;
    }

    printf("Em binario: ");
    for (i = total - 1; i >= 0; i--) {
        printf("%d", resto[i]);
    }
    printf("\n");

    return 0;
}


//EXERCICIO 4
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valor, maior, i;

    printf("Digite o 1o valor: ");
    scanf("%d", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);
        maior = (maior + valor + abs(maior - valor)) / 2;
    }

    printf("%d eh o maior\n", maior);

    return 0;
}


//EXERCICIO 5
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int v[100];
    int i, d, primo;

    for (i = 0; i < 100; i++) {
        v[i] = i + 1;
    }

    for (i = 0; i < 100; i++) {
        if (v[i] % 2 == 0) {
            printf("%d: par, ", v[i]);
        } else {
            printf("%d: impar, ", v[i]);
        }

        primo = 0;
        for (d = 1; d <= v[i]; d++) {
            if (v[i] % d == 0) {
                primo++;
            }
        }

        if (primo == 2) {
            printf("primo\n");
        } else {
            printf("nao primo\n");
        }
    }

    return 0;
}


//EXERCICIO 6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double x1[10], y1[10], x2[10], y2[10];
    double d;
    int i;

    printf("Vetor x1 (10 valores):\n");
    for (i = 0; i < 10; i++) scanf("%lf", &x1[i]);

    printf("Vetor y1 (10 valores):\n");
    for (i = 0; i < 10; i++) scanf("%lf", &y1[i]);

    printf("Vetor x2 (10 valores):\n");
    for (i = 0; i < 10; i++) scanf("%lf", &x2[i]);

    printf("Vetor y2 (10 valores):\n");
    for (i = 0; i < 10; i++) scanf("%lf", &y2[i]);

    printf("\n");
    for (i = 0; i < 10; i++) {
        d = sqrt(pow(x2[i] - x1[i], 2) + pow(y2[i] - y1[i], 2));
        printf("Posicao %d: p1(%.2lf, %.2lf) e p2(%.2lf, %.2lf) -> distancia = %.2lf\n",
               i + 1, x1[i], y1[i], x2[i], y2[i], d);
    }

    return 0;
}


//EXERCICIO 7
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int v[100];
    int i, sequencia = 0, achou = 0;

    for (i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }

    printf("Valores em ordem consecutiva:\n");
    for (i = 0; i < 99; i++) {
        if (v[i + 1] == v[i] + 1) {
            if (sequencia == 0) {
                printf("%d ", v[i]);
                Sequencia = 1;
                achou = 1;
            }
            printf("%d ", v[i + 1]);
        } else if (sequencia == 1) {
            printf("\n");
            Sequencia = 0;
        }
    }
    if (sequencia == 1) {
        printf("\n");
    }
    if (achou == 0) {
        printf("Nenhum valor em ordem consecutiva.\n");
    }
    return 0;
}
