#include <stdio.h>

int main(){

    int idade;
    int idade_futura;

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    idade_futura = idade + 6;

    printf("daqui a 6 anos voce tera: %d anos.\n", idade_futura);

    return 0;
}