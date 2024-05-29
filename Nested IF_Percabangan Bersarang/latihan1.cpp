#include <iostream>
using namespace std;

int main ()
{
    string username, password;

    cout << "=== Welcome ===" << endl;
    cout << "Username = ";
    cin >> username;

//     if (username == "Informatika")
//     {
//         if (password == "Kopi")
//         {
//             cout << "Selamat Datang Bos Kecil" << endl;
//         }
//         else
//         {
//             cout << "Password salah, coba lagi !" << endl;
//         }
//     }

//     else
//         {
//             cout << "Anda Tidak Terdaftar" << endl;
//         }



//     return 0;
// }

if (username == "Informatika" || username == "informatika")
    {
        cout << "Password = ";
        cin >> password;
        if (password == "Kopi" || password == "kopi")
        {
            cout << "Selamat Datang Bos Kecil" << endl;
        }
        else
        {
            cout << "Password salah, coba lagi !" << endl;
        }
    }

    else
        {
            cout << "Anda Tidak Terdaftar" << endl;
        }



    return 0;
}