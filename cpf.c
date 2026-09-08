#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    int digito1, digito2, soma = 0, resto;
    
    printf("Digite apenas os 11 numeros do CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
	
	//primeiro digito
    soma  = d0 * 10;
    soma += d1 * 9;
    soma += d2 * 8;
    soma += d3 * 7;
    soma += d4 * 6;
    soma += d5 * 5;
    soma += d6 * 4;
    soma += d7 * 3;
    soma += d8 * 2;
    
    resto = soma % 11;
    
    if (resto < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - resto;
    }
	
	//segundo digito
    soma  = d0 * 11;
    soma += d1 * 10;
    soma += d2 * 9;
    soma += d3 * 8;
    soma += d4 * 7;
    soma += d5 * 6;
    soma += d6 * 5;
    soma += d7 * 4;
    soma += d8 * 3;
    soma += d9 * 2;
    
    resto = soma % 11;
    
    if (resto < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - resto;
    }

    if ((d9 == digito1) && (d10 == digito2)) {
        printf("CPF Valido\n");
    } else {
        printf("CPF Invalido\n");
    }

    return 0;
}
