#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    double A, r, pi = 3.14159;

    cin >> r;

    A = pi *r*r;

    cout <<"A=" << A << endl;
    return 0;
}
