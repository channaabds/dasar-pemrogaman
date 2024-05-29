// #include <iostream>
// using namespace std;

// int main ()
// {
//     int nilai;

//     cout << "Masukan Nilai Anda = ";
//     cin >> nilai;

//     switch (nilai >= 65)
//     {
//         case true :
//         cout << "LULUS";
//         break;

//         default :
//         cout << "Tidak Lulus";
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
    cout << "Program Nilai Kelulusan " << endl;
    cout << "==========================================" << endl
         << endl;

    int a;

    cout << "Masukan Nilai (1-100) = ";
    cin >> a;

    if (a >= 1 && a <= 100)
    {
        switch (a >= 65)
        {
        case true:
            cout << "Selamat Anda LULUS";
            break;
        case false:
            cout << "Tidak Lulus";
            break;
        }
    }
    else
    {
        cout << "Nilai yang anda masukan tidak valid";
    }

    return 0;
}
