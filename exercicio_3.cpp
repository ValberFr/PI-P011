#include <iostream>

using namespace std;

void ordenaFloats(float &valor1, float &valor2, float &valor3, float &valor4)
{
    float aux_valor1 = valor1, aux_valor2 = valor2, aux_valor3 = valor3, aux_valor4 = valor4;

    if (valor1 > valor2)
    {
        valor2 = aux_valor1;
        valor1 = aux_valor2;
    }
    if (valor3 > valor4)
    {
        valor4 = aux_valor3;
        valor3 = aux_valor4;
    }
    if (valor1 > valor3)
    {
        valor3 = aux_valor1;
        valor1 = aux_valor3;
    }
    if (valor2 > valor4)
    {
        valor4 = aux_valor2;
        valor2 = aux_valor4;
    }
}

int main()
{
    float valor1 = 2.01, valor2 = 1.15, valor3 = 5.23, valor4 = 2.45;

    ordenaFloats(valor1, valor2, valor3, valor4);

    cout << valor1 << endl
         << valor2 << endl
         << valor3 << endl
         << valor4 << endl;

    return 0;
}