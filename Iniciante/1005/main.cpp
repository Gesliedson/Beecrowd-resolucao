#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(5);
    double A, B, media=0;

    cin >> A >> B;

    media = (A * 3.5 + B * 7.5) / 11;
    cout << "MEDIA = " << media << endl;
    return 0;
}
