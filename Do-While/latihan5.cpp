#include <iostream>
using namespace std;

int main (){
    int angka = 0;

    coba_lagi :
    cout << "Masukan Angka : ";
    cin >> angka;

    if (angka != 5) goto coba_lagi;

    return 0;
}