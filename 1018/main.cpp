#include <iostream>

using namespace std;

int main()
{
    int num, x;
    int cont = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 =0 , cont7 = 0;
    cin >> num;
    x =num;

    while (num >= 100)
    {
        cont++;
        num -= 100;
    }
    while (num >= 50)
    {
        cont2++;
        num -= 50;
    }

    while (num >= 20)
    {
        cont3++;
        num -= 20;
    }
    while (num >= 10)
    {
        cont4++;
        num -= 10;
    }

    while (num >= 5)
    {
        cont5++;
        num -=5;
    }

    while (num >= 2)
    {
        cont6++;
        num -=2;
    }

    while (num ==1 )
    {
        cont7++;
        num -=1;
    }
    cout << x << endl;
    cout << cont << " nota(s) de R$ 100,00" << endl;
    cout << cont2 << " nota(s) de R$ 50,00" << endl;
    cout << cont3 << " nota(s) de R$ 20,00" << endl;
    cout << cont4 << " nota(s) de R$ 10,00" << endl;
    cout << cont5 << " nota(s) de R$ 5,00" << endl;
    cout << cont6 << " nota(s) de R$ 2,00" << endl;
    cout << cont7 << " nota(s) de R$ 1,00" << endl;


    return 0;
}
