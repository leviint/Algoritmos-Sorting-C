// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o quick sort em uma função para ordenar este vetor.

#include <stdio.h>

void quickSort(int array[], int low, int high){
    int i = low, j = high, pivot = array[(low + high) / 2], temp;
    while(i <= j){
        while(array[i] < pivot) i++;
        while(array[j] > pivot) j--;
        if(i <= j){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    
    if(low < j) quickSort(array, low, j);
    if(i < high) quickSort(array, i, high);
}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    quickSort(array, 0, 5);

    printf("Array ordenado com QUICK SORT: ");
    for(int i = 0; i < 6; i++){
        if(i < 5){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);
        }
    }

    return 0;
}
