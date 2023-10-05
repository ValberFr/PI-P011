#include <iostream>

using namespace std;

float calc_serie(int N) {
    float soma = 0;

    for(int i = 0; i < N; i++) {
        soma += (float(i) + 1) / (float(N) - i);
    }

    return soma;
}

int main() {
    float resultado;

    resultado = calc_serie(5);

    cout << "Resultado do somatório: " << resultado << endl;

    return 0;
}
