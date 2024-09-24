#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int tamanho) {
    bool trocado;
    int i;
    int temp;

    do {
        trocado = false;
        for (i = 0; i < tamanho - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                trocado = true;
            }
        }
    } while (trocado);
}

int main() {
    int array[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSort(array, 6);

    printf("Array ordenado: ");
    for (i = 0; i < 6; i++) {
        if (i < 5) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
        }
    }

    return 0;
}
