// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o select sort em uma função para ordenar este vetor.

#include <stdio.h>
#include <stdbool.h>

void selectSort(int array[], int numElementos){
    int i, j;

    for(i = 0; i < numElementos; i++){
        int minimoIndex;
        minimoIndex = i;
        for(j = i + 1; j < numElementos; j++){
            if(array[j] < array[minimoIndex]){
                minimoIndex = j;
            }
        }
        if(minimoIndex != i){
            int temp = array[i];
            array[i] = array[minimoIndex];
            array[minimoIndex] = temp;
        }
    }
}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    selectSort(array, 6);

    printf("Array ordenado com SELECTION SORT: ");
    for(int i = 0; i < 6; i++){
        if(i < 5){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);
        }
    }

    return 0;
}