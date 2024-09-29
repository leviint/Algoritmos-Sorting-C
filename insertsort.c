// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o insert sort em uma função para ordenar este vetor.

#include <stdio.h>

void insertSort(int array[], int numElementos) {
    int i, j, temp;

    // Loop que percorre o array a partir do segundo elemento
    for(i = 1; i < numElementos; i++) {
        temp = array[i]; // Armazena o valor atual
        j = i - 1; // Define j como o índice do último elemento da parte ordenada

        // Move os elementos da parte ordenada que são maiores que temp uma posição à frente
        while(j >= 0 && array[j] > temp) {
            array[j + 1] = array[j]; // Desloca o elemento para a direita
            j--; // Move para o próximo elemento
        }

        array[j + 1] = temp; // Coloca temp na posição correta no array
    }
}

int main() {
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    insertSort(array, 6); // Chama a função insertSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com INSERT SORT: ");
    for(int i = 0; i < 6; i++) {
        // Se não for o último elemento, imprime com vírgula
        if(i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
