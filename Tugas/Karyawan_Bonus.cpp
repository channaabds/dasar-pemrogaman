#include <iostream>
using namespace std;

int main ()
{
    int gaji, jam, bonus;
    float bonus_disiplin;
    char disiplin;

    cout << "Masukan jumlah Jam Kerja (per minggu) = ";
    cin >> jam;
    

    if (jam > 40)
    {
        bonus = (jam - 40) * 25000;

        cout << "Selamat anda mendapatkan bonus sebesar = "<< bonus << endl << endl;
    }

    cout << "Apakah anda disiplin? [Y/T] (kehadiran = 100%) = ";
    cin >> disiplin;

    if (disiplin == 'Y' || disiplin =='y')
    {
        gaji = 300000;
        bonus_disiplin = (10.0/100) * gaji;
        cout << "Karena Anda disiplin, maka anda mendapat bonus lagi = " << bonus_disiplin << endl << endl;
    }
    else
    {
        cout << "Anda Tidak Layak Menerima Bonus" << endl;
    }

    cout << "Pendapatan Total Anda Adalah = " << bonus + bonus_disiplin;

    return 0;
}


