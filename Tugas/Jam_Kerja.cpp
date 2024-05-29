#include <iostream>
using namespace std;

int main ()
{
    int jam, gaji_pokok, bonus;
    char golongan;
    string nama;

    cout << "Masukan Nama = ";
    cin >> nama;
    cout << "Masukan Golongan = ";
    cin >> golongan;
    cout << "Masukan Jam Kerja = ";
    cin >> jam;

    if (golongan == 'A' || golongan == 'a')
    {
        gaji_pokok = 40000 * 48;
        cout << "Gaji Pokok " << nama <<  " adalah = " << gaji_pokok << endl;
        bonus = (jam - 48) * 30000;
        cout << "Bonus " << nama << " Adalah = " << bonus << endl;
        cout << "Gaji + Bonus "<< nama <<" adalah = " << gaji_pokok + bonus;
    }
    else if (golongan == 'B' || golongan == 'b')
    {
        gaji_pokok = 50000 * 48;
        cout << "Gaji Pokok Anda adalah = " << gaji_pokok << endl;
        bonus = (jam - 48) * 30000;
        cout << "Bonus Anda Adalah = " << bonus << endl;
        cout << "Gaji + Bonus anda adalah = " << gaji_pokok + bonus;
    }
    else if (golongan == 'C' || golongan == 'c')
    {
        gaji_pokok = 60000 * 48;
        cout << "Gaji Pokok Anda adalah = " << gaji_pokok << endl;
        bonus = (jam - 48) * 30000;
        cout << "Bonus Anda Adalah = " << bonus << endl;
        cout << "Gaji + Bonus anda adalah = " << gaji_pokok + bonus;
    }
    else if (golongan == 'D' || golongan == 'd')
    {
        gaji_pokok = 70000 * 48;
        cout << "Gaji Pokok Anda adalah = " << gaji_pokok << endl;
        bonus = (jam - 48) * 30000;
        cout << "Bonus Anda Adalah = " << bonus << endl;
        cout << "Gaji + Bonus anda adalah = " << gaji_pokok + bonus;
    }
    else
    {
        cout << "Data Yang Anda Masukan Salah";
    }



    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//   string nama;
//   char golongan;
//   int jamKerja, upahPerJam, gajiPokok, upahLembur, totalGaji;
  
//   // Input data karyawan
//   cout << "Masukkan nama karyawan: ";
//   getline(cin, nama);
//   cout << "Masukkan golongan karyawan (A/B/C/D): ";
//   cin >> golongan;
//   cout << "Masukkan jumlah jam kerja karyawan: ";
//   cin >> jamKerja;
  
//   // Menghitung gaji pokok berdasarkan golongan
//   if (golongan == 'A') {
//     upahPerJam = 40000;
//   } else if (golongan == 'B') {
//     upahPerJam = 50000;
//   } else if (golongan == 'C') {
//     upahPerJam = 60000;
//   } else if (golongan == 'D') {
//     upahPerJam = 70000;
//   }
//   gajiPokok = upahPerJam * jamKerja;
  
//   // Menghitung upah lembur
//   if (jamKerja > 48) {
//     upahLembur = 30000 * (jamKerja - 48);
//   } else {
//     upahLembur = 0;
//   }
  
//   // Menghitung total gaji
//   totalGaji = gajiPokok + upahLembur;
  
//   // Output total gaji
//   cout << "Total gaji karyawan " << nama << " adalah: " << totalGaji << endl;
  
//   return 0;
// }
