#include <iostream>
using namespace std;

int main ()
{
    
    cout << "Nama : Channa Abdullah Salim" <<endl;
    cout << "NIM  : 32602200009" <<endl;
    cout << "==========================================" <<endl;

    int a;

    cout << "Program Konversi Angka ke Huruf (1-100) " << endl;
    cout << "==========================================" << endl << endl;

    cout << "Masukan Angka = ";
    cin >> a;

    if (a >= 80 && a <= 100 )
    {
        cout << "Anda mendapatkan nilai A";
    }
    else if (a >= 60 && a <= 79  )
    {
        cout << "Anda mendapatkan nilai B";
    }
    else if (a > 0 && a <= 60)
    {
        cout << "Anda mendapatkan nilai C";
    }
    else
    cout << "Angka yg anda masukan tidak valid";

    return 0;
}