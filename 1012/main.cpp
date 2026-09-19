#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    double a,b,c, artr,arc, artz, arqd, arrt;

    cin >> a >> b >> c;

    //Área do triângulo
    artr = (a*c)/2;

    //Área do círculo
    arc = 3.14159 * c*c;

    //Área do trapézio
    artz = (a+b) * c / 2;

    //Área do quadrado
    arqd = b * b;

    //Área do retangulo A e B
    arrt = a * b;

    cout << "TRIANGULO: " << artr << endl;
    cout << "CIRCULO: " << arc << endl;
    cout << "TRAPEZIO: " << artz << endl;
    cout << "QUADRADO: " << arqd << endl;
    cout << "RETANGULO: " << arrt << endl;




    return 0;
}
