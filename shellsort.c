// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o shell sort em uma função para ordenar este vetor.

#include <stdio.h>

// Função que ordena o array usando o algoritmo Shell Sort
void shellSort(int array[], int numElementos) {
    // Inicia o intervalo (gap) com metade do número de elementos
    for(int gap = numElementos / 2; gap > 0; gap /= 2) {
        // Itera sobre os elementos do array a partir do índice do gap
        for(int i = gap; i < numElementos; i++) {
            int temp = array[i]; // Armazena o valor atual em temp
            int j;

            // Move os elementos que estão fora de ordem para frente
            for(j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap]; // Desloca o elemento
            }
            
            // Coloca o valor armazenado em temp na posição correta
            array[j] = temp;
        }
    }
}

int main() {
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    shellSort(array, 6); // Chama a função shellSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com SHELL SORT: ");
    for(int i = 0; i < 6; i++) {
        // Se não for o último elemento, imprime com vírgula
        if (i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}

