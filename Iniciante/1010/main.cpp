#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int codigo1,qtd1,codigo2,qtd2;
    double valor1,valor2, preco;

    cin >> codigo1 >> qtd1 >> valor1;
    cin >> codigo2 >> qtd2 >> valor2;

    preco = qtd1 * valor1 + qtd2 * valor2;

    cout << "VALOR A PAGAR: R$ " << preco << endl;
    return 0;
}
