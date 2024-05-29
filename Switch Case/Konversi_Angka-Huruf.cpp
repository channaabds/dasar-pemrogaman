#include <iostream>
using namespace std;

int main()
{
    cout << "Nama : Channa Abdullah Salim" << endl;
    cout << "NIM  : 32602200009" << endl;
    cout << "==========================================" << endl;

    int a;

    cout << "Program Konversi Angka ke Huruf (1-100) " << endl;
    cout << "==========================================" << endl << endl;

    cout << "Masukan Angka = ";
    cin >> a;

    if (a > 0  && a <= 100)
    {
    switch (a)
    {
        case 80 ... 100:
            cout << "Anda mendapatkan nilai A";
            break;
        case 60 ... 79:
            cout << "Anda mendapatkan nilai B";
            break;
    }
    switch (a)
    {
        case 0 ... 60 :
        cout << "Anda Mendapatkan Nilai C";
        break;
    }
    }
    else
    {
        cout << "Input Anda Tidak Valid";
    }
    
    return 0;
}
