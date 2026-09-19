#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    float n1,n2,n3,n4,n_exame;
    float med, med_f;

    cin >> n1 >> n2 >> n3 >> n4;

    med = (n1*2 + n2*3 + n3*4 + n4)/ 10;

    if (med >= 7)
    {
        cout << "Media: " << med << endl;
        cout << "Aluno aprovado.\n";
    }

    else if (med >= 5 && med < 7)
    {
        cout << "Media: " << med << endl;
        cout << "Aluno em exame.\n";

        cin >> n_exame;
        cout << "Nota do exame: " << n_exame << endl;

        med_f = (med + n_exame) / 2;

        if (med_f >= 5)
        {
            cout << "Aluno aprovado.\n";
            cout << "Media final: " << med_f << endl;
        }

        else
        {
            cout << "Aluno reprovado.\n";
            cout << "Media final: " << med_f << endl;
        }
    }

    else
    {
        cout << "Media: " << med << endl;
        cout << "Aluno reprovado.\n";
    }

    return 0;
}
