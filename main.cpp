#include <iostream>

using namespace std;

int main()
{
    int num, ano, mes, dia;

    cin >> num;

    ano = num / 365;
    num = num % 365;

    mes = num / 30;
    dia = num % 30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;


    return 0;
}
