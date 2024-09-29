// Faça um programa que receba valores aleatórios e diferentes em um vetor de inteiros de 6 posições
// e implemente o heap sort em uma função para ordenar este vetor.

#include <stdio.h>

// Função que transforma o array em um heap
void heapify(int array[], int numElementos, int i) {
    int maior = i; // Inicializa o maior como raiz
    int esquerda = 2 * i + 1; // Índice do filho esquerdo
    int direita = 2 * i + 2; // Índice do filho direito

    // Verifica se o filho esquerdo é maior que a raiz
    if(esquerda < numElementos && array[esquerda] > array[maior]) {
        maior = esquerda; // Atualiza maior se necessário
    }

    // Verifica se o filho direito é maior que o maior até agora
    if(direita < numElementos && array[direita] > array[maior]) {
        maior = direita; // Atualiza maior se necessário
    }

    // Se o maior não for a raiz, troca com a raiz
    if(maior != i) {
        int temp = array[i]; // Armazena a raiz em temp
        array[i] = array[maior]; // Troca a raiz com o maior
        array[maior] = temp; // Coloca temp na posição do maior

        // Recursivamente transforma o sub-heap afetado em um heap
        heapify(array, numElementos, maior);
    }
}

void heapSort(int array[], int numElementos) {
    // Cria um heap máximo
    for(int i = numElementos / 2 - 1; i >= 0; i--) {
        heapify(array, numElementos, i); // Aplica heapify em cada nó
    }

    // Extrai elementos um a um do heap
    for(int i = numElementos - 1; i > 0; i--) {
        int temp = array[0]; // Armazena a raiz em temp
        array[0] = array[i]; // Move o elemento atual para a raiz
        array[i] = temp; // Coloca o elemento armazenado na posição correta

        // Chama heapify na raiz para manter a propriedade do heap
        heapify(array, i, 0);
    }
}

int main() {
    int array[6];

    // Loop para receber 6 números do usuário
    for(int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    heapSort(array, 6); // Chama a função heapSort para ordenar o array

    // Exibe o array ordenado
    printf("Array ordenado com HEAP SORT: ");
    for(int i = 0; i < 6; i++) {
        // Se não for o último elemento, imprime com vírgula
        if (i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}

