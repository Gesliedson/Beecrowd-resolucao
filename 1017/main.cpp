#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);

    int t, v;
    float d;
    cin >> t >> v;

    d = (v * t) / 12.0;
    cout << d << endl;

    return 0;
}
