#include <iostream>

using namespace std;

int main()
{
    int hora_i, minu_i, hora_f, minu_f;
    int d_hora, d_minu;

    cin >> hora_i >> minu_i >> hora_f >> minu_f;

    if (hora_i == hora_f && minu_i == minu_f)
    {
        d_hora = 24;

        d_minu = minu_f - minu_i;

    }

    else if (hora_i == hora_f && minu_f > minu_i)
    {

    }

    cout << "O JOGO DUROU " << d_hora << " HORA(S) "<< "e " << d_minu << " MINUTO(S)" << endl;
    return 0;
}
