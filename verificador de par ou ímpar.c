#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d é IMPAR!\n", numero);
    } else {
        printf("O número %d é IMPAR!\n", numero);
    }

    return 0;
}