#include <iostream>
using namespace std;

float luas (int r)  // fungsi luas lingkaran
{
    return (3.14*r*r);
}
float kel (int r) // fungsi kel linhkaran
{
    return (3.14*2*r);
}

main (){
    int j;

    cout << "Masukan Jari - jari = ";
    cin >> j;
    cout << "Luas Lingkaran     = " << luas(j) << endl;
    cout << "Keliling Lingkaran = " << kel(j);
}