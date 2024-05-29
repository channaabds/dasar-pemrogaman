#include <iostream>
using namespace std;

int main ()
{
    int jawaban;

    cout << "Berapakah hasil 3 + 4 ?" << endl;
    cout << "Jawab = ";
    cin >> jawaban;

    string hasil = (jawaban == 7) ? "Benar" : "Salah";  // Ternary IF ELSE ==> (kondisi) ? true : false

    cout << "Jawaban Anda : " << hasil << endl;

    return 0;
}