#include <iostream>

using namespace std;

void insere_meio(int vet[], int &tam, int elemento) {
    int meio = tam / 2;

    for (int i = tam; i > meio; i--) {
        vet[i] = vet[i - 1];
    }
    
    vet[meio] = elemento;
    
    tam++;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5}, tamanho = sizeof(vetor) / sizeof(int);
    int elemento = 10;

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    insere_meio(vetor, tamanho, elemento);

    cout << "Vetor após a inserção: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
