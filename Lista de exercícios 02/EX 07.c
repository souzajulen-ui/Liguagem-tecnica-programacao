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
