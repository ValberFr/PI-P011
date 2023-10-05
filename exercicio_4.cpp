#include <iostream>

using namespace std;

int calcula(int x, int y, int operacao)
{
    if (operacao == 1)
    {
        return x + y;
    }
    else
    {
        return x - y;
    }
}

int main()
{
    int x = 10, y = 5;

    x = calcula(x, y, 1);
    y = calcula(x, y, 2);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}