// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o insert sort em uma função para ordenar este vetor.

#include <stdio.h>

void insertSort(int array[], int numElementos){
    int i, j;

    

}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    selectSort(array, 6);

    printf("Array ordenado com INSERT SORT: ");
    for(int i = 0; i < 6; i++){
        if(i < 5){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);
        }
    }

    return 0;
}