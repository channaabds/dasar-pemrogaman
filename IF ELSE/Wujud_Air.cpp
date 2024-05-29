// #include <iostream>
// using namespace std;

// int main ()
// {
//     int a;
//     cout << "==================================" << endl;
//     cout << "Program Wujud Air  :" << endl;
//     cout << "==================================" << endl;
//     cout << "Masukan Suhu (derajat) = ";
//     cin >> a;

//     if (a <= 0)
//     {
//         cout << "Padat";
//     }
//     else if (a < 100)
//     {
//         cout << "Cair";
//     }
//     else
//     cout << "Gas";

//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
    double suhu;

    cout << "Masukkan suhu air (dalam Celcius): ";
    cin >> suhu;

    if (suhu <= 0) {
        cout << "Air berwujud padat." << endl;
    } else if (suhu > 0 && suhu < 100) {
        cout << "Air berwujud cair." << endl;
    } else {
        cout << "Air berwujud gas." << endl;
    }

    return 0;
}
