//
// Created by victo on 13/02/2025.
//

#include "quicksort.h"


#include <stdio.h>

// Função para trocar dois elementos
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para particionar o array
int particionar(int arr[], int baixo, int alto) {
    int pivo = arr[alto]; // Pivô escolhido como último elemento
    int i = baixo - 1; // Índice do menor elemento

    for (int j = baixo; j < alto; j++) {
        if (arr[j] < pivo) { // Se o elemento for menor que o pivô
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]); // Coloca o pivô na posição correta
    return (i + 1);
}

// Função principal do Quicksort
void quicksort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int indice_pivo = particionar(arr, baixo, alto);
        quicksort(arr, baixo, indice_pivo - 1); // Ordena a parte esquerda
        quicksort(arr, indice_pivo + 1, alto); // Ordena a parte direita
    }
}

// Função para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

