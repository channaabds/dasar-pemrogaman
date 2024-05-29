#include <iostream>
using namespace std;

int main ()
{
    int suhu;

    cout << "Masukan Suhu = ";
    cin >> suhu;

    switch (suhu <= 0)
    {
        case true :
        cout << "PADAT";
        break;
    }
    switch (suhu > 0  &&  suhu < 100)
    {
        case true :
        cout << "CAIR";
        break;
    }
    switch (suhu > 100)
    {
        case true :
        cout << "GAS";
        break;
    }

    return 0;
}