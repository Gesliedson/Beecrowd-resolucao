#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int num, hora;
    double valor, salario;

    cin >> num >> hora >> valor;

    salario = hora * valor;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salario << endl;



    return 0;
}
