#include <iostream>

using namespace std;

int main ()
{
    char nilai;

    cout << "Input Nilai Anda (A - E) = ";
    cin >> nilai;

    switch (nilai)
    {
        case 'A' : case 'a' :
        cout << "Pertahankan" << endl;
        break;

        case 'B' :
        case 'b' :
        cout << "Harus Lebih Baik Lagi" << endl;
        break;

        case 'C' :
        case 'c' :
        cout << "Perbanyak Belajar" << endl;
        break;

        case 'D' :
        case 'd' :
        cout << "Jangan Keseringan Main" << endl;
        break;

        case 'E' :
        case 'e' :
        cout << "Kebanyakan Bolos" << endl;
        break;

        default :
        cout << "Maaf, Format anda tidak sesuai" << endl;
    }

    return 0;
}