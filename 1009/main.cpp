#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    char nome[15];
    double salario, vendas, total;

    cin.getline(nome,20);

    cin >> salario >> vendas;

    total = salario + (vendas * 0.15);

    cout << "TOTAL = R$ " << total << endl;
    return 0;
}
