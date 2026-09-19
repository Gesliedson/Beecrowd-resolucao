#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    float x1,y1, x2,y2, soma, distancia;

    cin >> x1 >> y1 >> x2 >> y2;

    soma = (x2-x1) * (x2-x1) + (y2 - y1) *(y2 - y1);

    distancia = pow(soma, 1/2.0);

    cout << distancia << endl;

    return 0;
}
