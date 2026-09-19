#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    float a , b, c,area;
    bool cond1, cond2, cond3;

    cin >> a >> b >> c;

    cond1 = a > -1*(b-c) && a < (b+c);
    cond2 = b > -1*(a-c) && b < (a+c);
    cond3 = c > -1*(b-a) && c < (b+a);


    if (cond1 && cond2 && cond3)
    {
        cout <<"Perimetro = " <<  a+b+c << endl;
    }

    else
    {
        area = ((a+b)*c)/2;

        cout << "Area = " << area << endl;
    }
    return 0;
}
