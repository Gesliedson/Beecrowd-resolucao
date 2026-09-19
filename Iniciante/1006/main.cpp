#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double A, B , C, media;

    cin >> A >> B >> C;

    media = (A*2 + B*3 + C*5) /10;
    cout << "MEDIA = " << media << endl;

    return 0;
}
