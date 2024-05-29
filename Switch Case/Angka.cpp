#include <iostream>
using namespace std;

int main ()
{
    int na, nh;

    cout << "Masukan Nilai = ";
    cin >> na;

    switch (na)
    {
        case 100 :
        cout << "Bagus";
        break;

        case 70 :
        cout << "Lumayan";
        break;

        default :
        cout << "Nilai yang anda masukan salah";

    }
}