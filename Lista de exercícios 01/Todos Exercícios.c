//Exercício 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Ordem inversa: %d %d\n", num2, num1);
    
	return 0;
}

//exercício 2

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

//exercício 3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;

    printf("Digite um numero ate 64: ");
    scanf("%d", &n);

    printf("Binario: ");
    printf("%d", (n / 64) % 2);
    printf("%d", (n / 32) % 2);
    printf("%d", (n / 16) % 2);
    printf("%d", (n / 8) % 2);
    printf("%d", (n / 4) % 2);
    printf("%d", (n / 2) % 2);
    printf("%d\n", n % 2);

    return 0;
}

//exercício 4

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

//Exercício 5

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v1, v2, v3, v4;
    int soma, produtorio;
    float media;

    printf("Digite 4 valores inteiros: ");
    scanf("%d %d %d %d", &v1, &v2, &v3, &v4);

    soma = v1 + v2 + v3 + v4;
    media = soma / 4.0f; 
    produtorio = v1 * v2 * v3 * v4;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %d\n", produtorio);

    return 0;
}

//Exercício 6

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade;
    int anos, meses, dias;
    
	printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    idade = idade % 365;

    meses = idade / 30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}

//Exercício 7

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    float raio, volume;
    float pi = 3.14159f;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0f / 3.0f) * pi * (raio * raio * raio);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}

//Exercício 8

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    float x1, y1, x2, y2;
    float dx, dy, distancia;

    printf("Digite as coordenadas x1 e y1 do P1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas x2 e y2 do P2: ");
    scanf("%f %f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distancia = sqrtf((dx * dx) + (dy * dy));

    printf("Distancia: %.4f\n", distancia);

    return 0;
}
