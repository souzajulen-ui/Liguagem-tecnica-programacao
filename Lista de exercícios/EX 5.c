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
