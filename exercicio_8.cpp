#include <iostream>

using namespace std;

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int conta_primos(int vetor[], int tamanho) {
    int count = 0;
    for (int i = 0; i < tamanho; i++) {
        if (eh_primo(vetor[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int vetor[] = {10, 2, 7, 4, 21}, tamanho = sizeof(vetor) / sizeof(int);

    int resultado = conta_primos(vetor, tamanho);
    
    cout << "A quantidade de números primos no array é: " << resultado << endl;

    return 0;
}
