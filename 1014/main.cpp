#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    int x;
    float y, consumo;

    cin >> x >> y;

    consumo = x / y;

    cout << consumo << " km/l" << endl;

    return 0;
}
