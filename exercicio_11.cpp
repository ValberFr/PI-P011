#include <iostream>
#include <string>

using namespace std;

string codifica(string texto)
{
    string texto_codificado = "";

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'Z')
        {
            texto_codificado.push_back('A');
        }
        else if (texto[i] == 'z')
        {
            texto_codificado.push_back('a');
        }
        else if (isalpha(texto[i]))
        {
            texto_codificado.push_back(texto[i] + 1);
        }
        else
        {
            texto_codificado.push_back(texto[i]);
        }
    }

    return texto_codificado;
}

string decodifica(string texto)
{
    string texto_codificado = "";

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'A')
        {
            texto_codificado.push_back('Z');
        }
        else if (texto[i] == 'a')
        {
            texto_codificado.push_back('z');
        }
        else if (isalpha(texto[i]))
        {
            texto_codificado.push_back(texto[i] - 1);
        }
        else
        {
            texto_codificado.push_back(texto[i]);
        }
    }

    return texto_codificado;
}

int main()
{
    string texto = "Ola tudo bem", codificado, decodificado;

    codificado = codifica(texto);

    cout << "Texto codificado: " << codificado << endl;

    decodificado = decodifica(codificado);

    cout << "Texto codificado: " << decodificado << endl;

    return 0;
}
