// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o merge sort em uma função para ordenar este vetor.

#include <stdio.h>

// Função que mescla dois subarrays em um array ordenado
void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid; // Tamanhos dos subarrays
    int L[n1], R[n2]; // Declaração de subarrays

    // Copia os dados para o subarray L
    for(int i = 0; i < n1; i++) L[i] = array[left + i];
    // Copia os dados para o subarray R
    for(int i = 0; i < n2; i++) R[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = left; // Inicializa os índices dos subarrays e do array principal
    // Mescla os subarrays de forma ordenada
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            array[k] = L[i]; // Se o elemento de L for menor ou igual, o adiciona ao array
            i++; // Incrementa o índice de L
        } else {
            array[k] = R[j]; // adiciona o elemento de R
            j++; // Incrementa o índice de R
        }
        k++; // Incrementa o índice do array principal
    }
    // Copia os elementos restantes de L, se houver
    while(i < n1) {
        array[k] = L[i]; // Adiciona o elemento restante de L
        i++; // Incrementa o índice de L
        k++; // Incrementa o índice do array principal
    }
    // Copia os elementos restantes de R, se houver
    while(j < n2) {
        array[k] = R[j]; // Adiciona o elemento restante de R
        j++; // Incrementa o índice de R
        k++; // Incrementa o índice do array principal
    }
}

void mergeSort(int array[], int left, int right) {
    if(left < right) { // Verifica se o array tem mais de um elemento
        int mid = left + (right - left) / 2; // Encontra o ponto médio
        mergeSort(array, left, mid); // Chama mergeSort para a metade esquerda
        mergeSort(array, mid + 1, right); // Chama mergeSort para a metade direita
        merge(array, left, mid, right); // Mescla as duas metades
    }
}

int main() {
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, 5); // Chama a função mergeSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com MERGE SORT: ");
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

