#include <iostream>

using namespace std;

int* intercala(int* array1, int tamanho1, int* array2, int tamanho2, int& tamanhoResultado) {
    tamanhoResultado = tamanho1 + tamanho2;
    int* resultado = new int[tamanhoResultado];

    int i = 0, j = 0, k = 0;
    
    while (i < tamanho1 && j < tamanho2) {
        resultado[k++] = array1[i++];
        resultado[k++] = array2[j++];
    }
    
    while (i < tamanho1) {
        resultado[k++] = array1[i++];
    }
    
    while (j < tamanho2) {
        resultado[k++] = array2[j++];
    }
    
    return resultado;
}

int main() {
    int vetor1[] = {1, 2, 3}, vetor2[] = {4, 5, 6, 7};
    int tamanho1 = sizeof(vetor1) / sizeof(int), tamanho2 = sizeof(vetor2) / sizeof(int);
    
    int tamanhoResultado;
    int* resultado = intercala(vetor1, tamanho1, vetor2, tamanho2, tamanhoResultado);
    
    cout << "Vetor intercalado: ";
    for (int i = 0; i < tamanhoResultado; i++) {
        cout << resultado[i] << " ";
    }
    
    return 0;
}
