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
