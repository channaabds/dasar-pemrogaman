// #include <iostream>
// #include <cmath>
// using namespace std;

// int main ()
// {
//     float a,c, hasil;
//     char b;

//     cout << "====================================" << endl;
//     cout << "Nama   : Channa Abdullah Salim" << endl;
//     cout << "NIM    : 32602200009" << endl;
//     cout << "- - - - - - - - - - - - - - - - - - -" << endl;
//     cout << "PROGRAM KALKULATOR" << endl;
//     cout << "=====================================" << endl;
//     cout << "Masukan nilai ke-I = ";
//     cin >> a;
//     cout << "Masukan operator (:, x, -, +) = ";
//     cin >> b;
//     cout << "Masukan nilai ke - II = ";
//     cin >> c;

//     if (b == ':')
//     {
//         hasil = a / c;
//         cout << "Hasil dari " << a << " : " << c << " = " << hasil;
//     }
//     else if (b == 'x')
//     {
//         hasil = a * c;
//         cout << "Hasil dari " << a << " x " << c << " = " << hasil;
//     }
//     else if (b == '-')
//     {
//         hasil = a - c;
//         cout << "Hasil dari " << a << " - " << c << " = " << hasil;
//     }
//     else 
//     {
//         hasil = a + c;
//         cout << "Hasil dari " << a << " + " << c << " = " << hasil;
//     }

//     return 0;

// }


#include <iostream>
using namespace std;

int main() {
    double operand1, operand2;
    char operasi;

    cout << "Masukkan operand 1: ";
    cin >> operand1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan operand 2: ";
    cin >> operand2;

    double hasil;

    if (operasi == '+') {
        hasil = operand1 + operand2;
        cout << "Hasil penjumlahan: " << hasil << endl;
    } else if (operasi == '-') {
        hasil = operand1 - operand2;
        cout << "Hasil pengurangan: " << hasil << endl;
    } else if (operasi == '*') {
        hasil = operand1 * operand2;
        cout << "Hasil perkalian: " << hasil << endl;
    } else if (operasi == '/') {
        if (operand2 != 0) {
            hasil = operand1 / operand2;
            cout << "Hasil pembagian: " << hasil << endl;
        } else {
            cout << "Pembagian oleh nol tidak valid." << endl;
        }
    } else {
        cout << "Operator yang dimasukkan tidak valid." << endl;
    }

    return 0;
}
