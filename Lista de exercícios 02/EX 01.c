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
