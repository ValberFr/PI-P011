#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &max, int &min) {
    for (int i = 0; i < n; i++) {
        if(vetor[i] > max) {
            max = vetor[i];
        } if (vetor[i] < min) {
            min = vetor[i];
        }
    }
}

int main() {

    int vetor[] = {10, 4, 15, 2, 3, 1};
    int max = vetor[0], min = vetor[0], size = 0;

    for(int i : vetor) {
        size++;
    }

    maxmin(vetor, size, max, min);

    cout << "Maior: " << max << endl;
    cout << "Menor: " << min << endl;

    return 0;
}