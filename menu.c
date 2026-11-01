#include <stdio.h>

int main() {

    int opcao;
     
    do {
    printf("Menu: \n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
            case 1: 
            printf("Você esclheu um novo jogo.\n");
            break;          
            case 2:
            printf("Você escolheu carregar um jogo salvo.\n");
            break;
            case 3:
            printf("Saindo do jogo. Até logo!\n");
            break;
            default:
            printf("Opção inválida.\n");
     }

    }while (opcao != 3);

      return 0;
    }