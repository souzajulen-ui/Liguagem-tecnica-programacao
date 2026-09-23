//Exercício 01
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade, anoAtual, anoNascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Voce nasceu em %d\n", anoNascimento);

	return 0;
}

//Exercício 02
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &k);

    m = k / 3.6;

    printf("Velocidade em m/s: %.2f\n", m);

    return 0;
}

//Exercício 03

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float reais, cotacao, dolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}

//Exercício 04

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32.0;

    printf("Temperatura em Fahrenheit: %.2f\n", f);

    return 0;
}

//Exercício 05

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	 float g, r, p;

    p = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    r = g * p / 180;

    printf("Angulo em radianos: %.4f\n", r);
    
	return 0;
}

//Exercício 06

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

	return 0;
}

//Exercício 07

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float total, primeiro, segundo, terceiro;

    total = 780000.00;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - primeiro - segundo;

    printf("Primeiro ganhador: R$ %.2f\n", primeiro);
    printf("Segundo ganhador: R$ %.2f\n", segundo);
    printf("Terceiro ganhador: R$ %.2f\n", terceiro);

    return 0;
}

//Exercício 08

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

//Exercício 09

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tempo, velocidade, distancia;
    float litros;

    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%d", &tempo);

    printf("Digite a velocidade media (km/h): ");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("%.3f\n", litros);

    return 0;
}

//Exercício 10

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, maiorAB, maior;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
