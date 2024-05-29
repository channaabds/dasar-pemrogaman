#include <iostream>
using namespace std;

int main ()
{
    cout << "Nama : Channa Abdullah Salim" <<endl;
    cout << "NIM  : 32602200009" <<endl;
    cout << "==========================================" <<endl;
    cout << "Program Nilai Kelulusan " << endl;
    cout << "==========================================" << endl << endl;

    int a;

    cout << "Masukan Nilai (1-100) = ";
    cin >> a;

    if (a >= 1 && a <= 100)
    {
        if (a >= 65)
        {
            cout << "Selamat Anda LULUS";
        }
        else
        {
            cout << "Tidak Lulus";
        }
    }
    else
    {
        cout << "Nilai yang anda masukan tidak valid";
    }

    return 0;
}
