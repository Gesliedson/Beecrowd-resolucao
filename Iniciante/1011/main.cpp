#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision (3);
    double r, vol;

    cin >> r;

    vol = (4.0/3) * 3.14159 * (r*r*r);

    cout << "VOLUME = " << vol << endl;
    return 0;
}
