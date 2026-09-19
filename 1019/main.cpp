#include <iostream>

using namespace std;

int main()
{
    int s, h, m,r;

    cin >> s;
    h = s / 3600;
    r = s % 3600;

    m = r / 60;
    s = r % 60;

    cout << h << ":" << m << ":" << s << endl;



    return 0;
}
