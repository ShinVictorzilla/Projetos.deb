#include <stdio.h>

int main() {
    // 1. Vetor desordenado para testar o Bubble Sort
    int tempos_chegada[10] = {18, 3, 41, 7, 22, 12, 50, 29, 58, 35};
    
    // Novas variáveis necessárias para o Bubble Sort
    int i, j, temp;
    int n = 10; // Quantidade de elementos
    int soma_intervalos = 0;

    printf("===========================================\n");
    printf("   SISTEMA DE MONITORAMENTO DE ÔNIBUS   \n");
    printf("===========================================\n\n");

    // Exibe os dados desordenados antes da ordenação (opcional)
    printf("--- Tempos no vetor antes de ordenar ---\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tempos_chegada[i]);
    }
    printf("\n\n-------------------------------------------\n\n");

    // =======================================================
    // 2. APLICAÇÃO DO BUBBLE SORT (ORDENAÇÃO DO MENOR P/ MAIOR)
    // =======================================================
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            // Se o elemento da esquerda for MAIOR que o da direita, troca!
            if (tempos_chegada[j] > tempos_chegada[j + 1]) {
                temp = tempos_chegada[j];
                tempos_chegada[j] = tempos_chegada[j + 1];
                tempos_chegada[j + 1] = temp;
            }
        }
    }

    // 3. Exibir os tempos já ORDENADOS
    printf("1. Próximas chegadas ordenadas (minutos):\n");
    for (i = 0; i < n; i++) {
        printf("   Ônibus %2d: chega em %2d min\n", i + 1, tempos_chegada[i]);
    }

    printf("\n-------------------------------------------\n\n");

    // 4. Calcular o intervalo entre ônibus consecutivos
    printf("2. Intervalo entre ônibus consecutivos:\n");
    for (i = 0; i < n - 1; i++) {
        int intervalo = tempos_chegada[i + 1] - tempos_chegada[i];
        soma_intervalos += intervalo;
        printf("   Entre ônibus %d e %d: %d minutos\n", i + 1, i + 2, intervalo);
    }

    // 5. Exibir estatísticas finais
    float media_espera = (float)soma_intervalos / 9.0;

    printf("\n-------------------------------------------\n\n");
    printf("3. Resumo Estatístico:\n");
    printf("   - Primeiro ônibus: %d min\n", tempos_chegada[0]);
    printf("   - Último ônibus:   %d min\n", tempos_chegada[9]);
    printf("   - Intervalo médio entre ônibus: %.2f min\n", media_espera);

    return 0;
}