#include <iostream>
using namespace std;

int main (){
    char loncat = 0;
    cout << "Masukan Angka [y/n] : ";
    cin >> loncat;
    cout << "1" << endl;

    if (loncat == 'y') goto loncatan;
    cout << "5" << endl;
    cout << "2" << endl;

    loncatan :
    cout << "3" << endl;

    return 0;
}