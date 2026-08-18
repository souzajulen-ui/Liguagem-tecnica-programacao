#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, antecessor, sucessor;
	printf("Entre com o valor de N : ");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	printf("o numero %d , seu antecessor %d e seu sucessor %d", n,antecessor, sucessor );

	
	int a,b,c, maiorTemp, maior;
	printf("insira tres valores para identificar o maior: ");
	scanf("%d %d %d", &a,&b,&c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	
	printf("o maior entre |%d|%d|%d| = %d", a,b,c, maior);
	
	return 0;
}
