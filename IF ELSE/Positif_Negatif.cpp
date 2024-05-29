#include <iostream>
using namespace std;

int main ()
{
    cout << "Nama : Channa Abdullah Salim" <<endl;
    cout << "NIM  : 32602200009" <<endl;
    cout << "==========================================" <<endl;
    cout << "Program Bilangan Positif - Negatif " << endl;
    cout << "==========================================" << endl << endl;

    int a;

    cout << "Masukan Nilai = ";
    cin >> a;

    if (a > 0)
    {
        cout << "Bilangan Postif";
    }
    else if (a < 0)
    {
    cout << "Bilangan Negatif";
    }
    else
    {
        cout << "Input tidak valid";
    }


    return 0;
}