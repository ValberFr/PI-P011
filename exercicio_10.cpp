#include <iostream>

using namespace std;

int* encontrarPosicoesDaLetra(string &str, char letra, int &tamanho) {
    int *posicoes = nullptr;
    tamanho = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            int* aux = new int[tamanho + 1];

            for (int j = 0; j < tamanho; j++) {
                aux[j] = posicoes[j];
            }

            aux[tamanho] = i;

            delete[] posicoes;

            posicoes = aux;

            tamanho++;
        }
    }

    return posicoes;
}

int main() {
    string texto = "Ola tudo bem";
    char letra = 'o';
    int tamanho;

    int *posicoes = encontrarPosicoesDaLetra(texto, letra, tamanho);

    cout << "Posições da letra " << letra << ": ";
    for (int i = 0; i < tamanho; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;
    cout << "Tamanho do vetor: " << tamanho << endl;

    delete[] posicoes;

    return 0;
}
