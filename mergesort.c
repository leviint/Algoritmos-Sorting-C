// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o merge sort em uma função para ordenar este vetor.

#include <stdio.h>

void merge(int array[], int left, int mid, int right){
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++) L[i] = array[left + i];
    for(int i = 0; i < n2; i++) R[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            array[k] = L[i];
            i++;
        }else{
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        array[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

int main(){
    int array[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, 5);

    printf("Array ordenado com MERGE SORT: ");
    for(int i = 0; i < 6; i++){
        if(i < 5){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);
        }
    }

    return 0;
}
