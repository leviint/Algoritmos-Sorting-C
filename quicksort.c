// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o quick sort em uma função para ordenar este vetor.

#include <stdio.h>

void quickSort(int array[], int low, int high) {
    int i = low, j = high; // Inicializa os índices i e j para o início e o fim do array
    int pivot = array[(low + high) / 2]; // Define o pivô como o elemento do meio do array
    int temp;

    // Loop para reordenar os elementos em relação ao pivô
    while(i <= j) {
        // Encontra o primeiro elemento maior ou igual ao pivô a partir da esquerda
        while(array[i] < pivot) i++;
        // Encontra o primeiro elemento menor ou igual ao pivô a partir da direita
        while(array[j] > pivot) j--;
        
        // Se i ainda for menor ou igual a j, troca os elementos
        if(i <= j) {
            temp = array[i]; // Armazena o elemento de i em temp
            array[i] = array[j]; // Troca o elemento de j para a posição de i
            array[j] = temp; // Troca o elemento de temp para a posição de j
            i++; // Incrementa o índice i
            j--; // Decrementa o índice j
        }
    }

    // Chama recursivamente o quickSort para as duas metades
    if(low < j) quickSort(array, low, j); // Ordena a metade esquerda
    if(i < high) quickSort(array, i, high); // Ordena a metade direita
}

int main() {
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    quickSort(array, 0, 5); // Chama a função quickSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com QUICK SORT: ");
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
