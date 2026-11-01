#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inválida\n");
    } else if (idade < 18) {
        printf("Menor de idade\n"); 
    } else if (idade < 65) {
        printf("Adulto\n"); 
    } else {
        printf("Idoso\n");
    }

    return 0;
}