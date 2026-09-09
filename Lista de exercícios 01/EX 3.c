#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;

    printf("Digite um numero ate 64: ");
    scanf("%d", &n);

    printf("Binario: ");
    printf("%d", (n / 64) % 2);
    printf("%d", (n / 32) % 2);
    printf("%d", (n / 16) % 2);
    printf("%d", (n / 8) % 2);
    printf("%d", (n / 4) % 2);
    printf("%d", (n / 2) % 2);
    printf("%d\n", n % 2);

    return 0;
}
