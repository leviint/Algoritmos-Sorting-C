// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o select sort em uma função para ordenar este vetor.

#include <stdio.h>

void selectSort(int array[], int numElementos) {
    int i, j;

    // Loop para percorrer todos os elementos do array
    for(i = 0; i < numElementos; i++) {
        int minimoIndex; // armazenar o índice do menor elemento
        minimoIndex = i; // Assume que o menor elemento é o primeiro não ordenado

        // Loop para encontrar o menor elemento no restante do array
        for(j = i + 1; j < numElementos; j++) {
            // Se o elemento atual for menor que o menor encontrado até agora
            if(array[j] < array[minimoIndex]) {
                minimoIndex = j; // Atualiza o índice do menor elemento
            }
        }

        // Se o menor elemento encontrado não é o elemento atual
        if(minimoIndex != i) {
            // Troca os elementos
            int temp = array[i];           // Armazena o valor atual
            array[i] = array[minimoIndex]; // Substitui o atual pelo menor encontrado
            array[minimoIndex] = temp;     // Coloca o valor armazenado na posição do menor
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

    selectSort(array, 6); // Chama a função selectSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com SELECTION SORT: ");
    for(int i = 0; i < 6; i++) {
        // Se não for o último elemento, imprime com vírgula
        if(i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}
