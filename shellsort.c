// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o shell sort em uma função para ordenar este vetor.

#include <stdio.h>

void shellSort(int array[], int numElementos){
    for(int gap = numElementos / 2; gap > 0; gap /= 2){
        for(int i = gap; i < numElementos; i++){
            int temp = array[i];
            int j;

            for(j = i; j >= gap && array[j - gap] > temp; j -= gap){
                array[j] = array[j - gap];
            }
            
            array[j] = temp;
        }
    }
}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    shellSort(array, 6);
    printf("Array ordenado com SHELL SORT: ");

    for(int i = 0; i < 6; i++){
        printf(i < 5 ? "%d, " : "%d", array[i]);
    }


    return 0;
}
