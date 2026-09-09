#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char letra;
	printf("insira uma letra : ");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra =='e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra =='o'){
		   printf("aoba !");
		}
		if(letra == 'i' || letra == 'u'){
		printf("La ele !");
		}
    }else {
    	printf("67");
	}
	printf("\n");
	
	if(letra == 'a')printf("a de amor");
	else if(letra == 'b')printf("b de baixinho");
	else if(letra == 'c')printf("c de coração");
	else if(letra == 'd')printf("d de dacinho");
	
	printf("\n");
	switch (letra){
		case 'a':
			printf("a de amor ");
			break;
		case 'b':
			printf("B de baixinho ");
			break;
		case 'c':
			printf("c de curação ");
			printf("ccc");
			break;
		case 'd':
			printf("d de dedinho ");
			break;		
	}
	
	return 0;
}
