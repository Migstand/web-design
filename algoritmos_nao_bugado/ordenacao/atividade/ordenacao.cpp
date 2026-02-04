#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int total){
    int i, qtd = 0;
    for (i = 1; i<total; i++){
        if (a[i - 1] <= a[i])
            qtd++;
    }
    return qtd == total - 1;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int taman){
    int i, j, min, aux;
    for (i = 0; i < tam-1; i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        if (num[i] != num[min]){
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int tam){
    int i, x;
    for (i = 0; i<tam ; i++){
        x = a[i];
        if (i == 0)
            continue;
        for (int j = i - 1; j > 0; j--){
            if (a[j] > x){
                int z = a[j]
                a[j] = x;
                x = 
            }
        }
    }
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
