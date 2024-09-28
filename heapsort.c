// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o heap sort em uma função para ordenar este vetor.

#include <stdio.h>

void heapify(int array[], int numElementos, int i){
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if(esquerda < numElementos && array[esquerda] > array[maior]){
        maior = esquerda;
    }

    if(direita < numElementos && array[direita] > array[maior]){
        maior = direita;
    }

    if(maior != i){
        int temp = array[i];
        array[i] = array[maior];
        array[maior] = temp;

        heapify(array, numElementos, maior);
    }
}

void heapSort(int array[], int numElementos){

    for(int i = numElementos / 2 - 1; i >= 0; i--)
        heapify(array, numElementos, i);

    for(int i = numElementos - 1; i > 0; i--){
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;

        heapify(array, i, 0);
    }
}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    heapSort(array, 6);

    printf("Array ordenado com HEAP SORT: ");
    for(int i = 0; i < 6; i++){
        if (i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}
