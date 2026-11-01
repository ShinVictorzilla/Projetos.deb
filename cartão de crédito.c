#include <stdio.h>

int main() {

    int idade;
    int renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%d", &renda);

    if(idade >= 18 && renda >= 2000) {
        printf("Aprovado para receber o cartão, porra\n");
    } else {
        printf("Não foi aprovado, seu vagabundo\n");
    }

    return 0;
}