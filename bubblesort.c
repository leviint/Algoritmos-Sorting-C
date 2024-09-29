//Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
//e implemente o bubble sort em uma função para ordenar este vetor.

#include <stdio.h>
#include <stdbool.h>  //biblioteca para usar booleano

void bubbleSort(int array[], int numElementos){
    bool trocado;    //verificar se houve troca
    int temp;       //armazenar valores durante a troca

    do {
        trocado = false; // Inicializa trocado como falso a cada iteração
        // Loop para percorrer o array até o penúltimo elemento
        for (int i = 0; i < numElementos - 1; i++){
            // Se o elemento atual for maior que o próximo
            if (array[i] > array[i + 1]){
                // Troca os elementos
                temp = array[i];       // Armazena o valor atual em temp
                array[i] = array[i + 1]; // Substitui o atual pelo próximo
                array[i + 1] = temp;   // Coloca o valor armazenado em temp no próximo
                trocado = true;        // Marca que houve troca
            }
        }
    } while(trocado); // Continua o loop enquanto houver trocas
}

int main(){
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSort(array, 6); // Chama a função bubbleSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com BUBBLE SORT: ");
    for(int i = 0; i < 6; i++){
        // Se não for o último elemento, imprime com vírgula
        if(i < 5){
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}
