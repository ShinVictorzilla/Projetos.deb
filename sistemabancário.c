#include <stdio.h>

void exibirMenu() {
      printf("=== Sistema Bancário ===\n");
      printf("1. Consultar saldo\n");
      printf("2. Depositar\n");
      printf("3. Sacar\n");
      printf("4. Sair\n");
}

int main() {
    int opcao;
    float saldo = 1000.0;
    float valor;

    do{
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            printf("Seu saldo atual é de R$ %.2f\n", saldo);
            break;
            case 2:
            printf("Digite o valor a ser depositado: ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Depósito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            break;
            case 3: 
            printf("Digite o valor para saque: ");
            scanf("%f", &valor);
            if(valor > 0 && valor <= saldo){
                saldo -= valor;
                printf("Saque realizado! Novo saldo: S$ %.2f\n", saldo);
            } else {
                printf("Valor inválido ou saldo insuficiente para saque.\n");
            }
            break;
            case 4:
            printf("Obrigado por usar nosso sistema bancário. Até logo!\n");
            break;

            default:
            printf("Opcão inválida! Tente novamente.\n");
  
        }
    } while (opcao != 4);

     return 0;
}