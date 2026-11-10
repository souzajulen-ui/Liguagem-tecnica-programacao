#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, num, notas[10];

    printf("==Nota Bimestral==\nCadastrar notas:\n");
    
   
    for (i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1); 
        scanf("%d", &notas[i]);
    }
    system("cls"); 

    printf("Qual nota deseja ver (N do aluno de 1 a 10)? ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
        printf("Nota do aluno %d: %d\n", num, notas[num - 1]);
    } else {
        printf("Nota nao cadastrada!\n");
    }

    return 0;
}

