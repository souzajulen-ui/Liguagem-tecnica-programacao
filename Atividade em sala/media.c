#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[50];
	float n1,n2,n3,media;
	
	printf("Insira o seu nome ? \n");
	scanf("%s",nome);
	
	printf("insira as suas notas :\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if (media >= 70 && media <= 100){
		printf("\nAluno: %s \nnota final : %.2f \nSituacao : aprovado",nome,media);
	}
	else if (media >= 40 && media <= 69){
		printf("\nAluno: %s \nnota final : %.2f \nSituacao : exame",nome,media);
	}
	else if (media <= 39){
		printf("\nAluno: %s \nnota final : %.2f \nSituacao : Reprovado",nome,media);
	}
	else {
		printf("nota invalida");
	}
	

	return 0;
}
