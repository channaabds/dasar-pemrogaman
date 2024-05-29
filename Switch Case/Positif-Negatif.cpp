// #include <iostream>
// using namespace std;

// int main ()
// {
//     int angka;

//     cout << "Masukan Angka = ";
//     cin >> angka;

//     switch (angka < 0)
//     {
//         case true :
//         cout << "Bilangan " << angka << " adalah NEGATIF";
//         break;

//         /*case false*/  default :
//         cout << "Bilangan " << angka << " adalah POSITIF";
//         break;

//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    cout << "Nama : Channa Abdullah Salim" << endl;
    cout << "NIM  : 32602200009" << endl;
    cout << "==========================================" << endl;
    cout << "Program Bilangan Positif - Negatif " << endl;
    cout << "==========================================" << endl
         << endl;

    int a;

    cout << "Masukan Nilai = ";
    cin >> a;

    switch (a > 0)
    {
        case true:
            cout << "Bilangan Positif";
            break;
        case false:
            if (a < 0)
            {
                cout << "Bilangan Negatif";
            }
            else
            {
                cout << "Input tidak valid";
            }
            break;
    }

    return 0;
}
