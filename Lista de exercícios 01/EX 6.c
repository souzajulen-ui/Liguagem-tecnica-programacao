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
