#include <iostream>

using namespace std;

int main()
{
    int a , b, div;

    cin >> a >> b;

    div = b/a;
    if (b % a == 0  || a % b == 0)
    {
        cout << "Sao Multiplos\n";
    }

    else
    {
        cout << "Nao sao Multiplos\n";
    }
    return 0;
}
