#include <stdio.h>
 int main () {
     int anoNascimento = 2003;
     int mesNascimento = 11;

     int anoAtual = 2026;
     int mesAtual = 10; 

     int idade = anoAtual - anoNascimento;

     if (mesAtual < mesNascimento) {
        idade = idade - 1;
     }
     printf("Minha idade é: %d anos\n", idade);

     return 0;
 }