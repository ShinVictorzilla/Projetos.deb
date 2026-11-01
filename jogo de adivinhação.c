#include <stdio.h>

int main() {
    int numero, tentativas = 0;
    const int numero_secreto = 12;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar um número de 1 a 100.\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
     

        if (numero < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (numero > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você adivinhou o número em %d tentativas.\n", tentativas);
        }
    } while (numero != numero_secreto);

    return 0;
}
