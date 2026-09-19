#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int cod, qtd;
    float preco;

    cin >> cod >> qtd;

    if (cod == 1)
    {
        preco = qtd * 4.0;
    }

    else if (cod == 2)
    {
        preco = qtd * 4.5;
    }

    else if (cod == 3)
    {
        preco = qtd * 5.0;
    }

    else if (cod == 4)
    {
        preco = qtd * 2.0;
    }

    else
    {
        preco = qtd * 1.5;
    }

    cout << "Total: R$ " << preco << endl;
    return 0;
}
