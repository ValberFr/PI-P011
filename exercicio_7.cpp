#include <iostream>

using namespace std;

void multiplica_por_n(int vetor[], int tamanho, int multiplicador)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] *= multiplicador;
    }
}

int main()
{
    int vetor[] = {5, 2, 7, 4, 3}, tamanho = sizeof(vetor) / sizeof(int), multiplicador;

    cout << "Digite o multiplicador: ";
    cin >> multiplicador;

    multiplica_por_n(vetor, tamanho, multiplicador);

    cout << "Vetor após multiplicação: " << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
