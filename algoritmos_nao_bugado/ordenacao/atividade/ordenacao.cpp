#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int total){
    unsigned int qtd = 0;
    for (unsigned int i = 1; i < total; i++){
        if (a[i - 1] <= a[i])
            qtd++;
    }
    return qtd == total - 1;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int tam){
    unsigned int min, aux;
    for (unsigned int i = 0; i < tam-1; i++){
        min = i;
        for (unsigned int j = (i+1); j < tam; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        if (a[i] != a[min]){
            aux = a[i];
            a[i] = a[min];
            a[min] = aux;
        }
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int tam) {
    unsigned int i;
    for (i = 1; i < tam; i++) {
        int key = a[i]; // Elemento a ser inserido
        int j = i - 1;

        // Desloca os elementos maiores que a chave para a direita
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key; // Insere a chave na posição correta
    }
}

void merge(int a[], int i1, int i2, int j1, int j2){
    int* temp = new int[((j1 - i1) + (j2 - i2) + 2)];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while(i <= j1 && j <= j2){
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while(i <= j1)
        temp[k++] = a[i++];
    while(j <= j2)
        temp[k++] = a[j++];
    for (i = i1, j = 0; i<= j2; i++, j++)
        a[i] = temp[j];
    delete[] temp;
}

/* TODO: Implementar função */
void merge_sort(int a[], int primeiro, int ultimo) {
    int meio;
        if (primeiro < ultimo) {
            meio = (primeiro + ultimo) / 2;
            merge_sort(a, primeiro, meio);
            merge_sort(a, meio + 1, ultimo);
            merge(a, primeiro, meio, meio+1, ultimo);
        }
}
    

