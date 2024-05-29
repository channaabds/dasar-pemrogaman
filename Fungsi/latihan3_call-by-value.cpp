#include <iostream>
using namespace std;

void Vtukar (int bil1, int bil2)
{
    int temp;
    temp = bil1;
    bil1 = bil2;
    bil2 = temp;

    cout << "Nilai pada saat berada di fungsi Vtukar : " << endl;
    cout << "Nilai Bilangan 1 : " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
    cout << "Nilai Bilangan 2 : " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
    cout << endl;
}

int main (){
    int bil1, bil2;
    bil1 = 7;
    bil2 = 6;

    cout << "\tCALL BY VALUE" << endl;
    cout << "\t-------------" << endl;
    cout << "\nNilai sebelum pemanggilan fungsi Vtukar : " << endl;
    cout << "Nilai bilangan 1 = " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
    cout << "Nilai bilangan 2 = " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
    cout << endl;

    Vtukar (bil1, bil2);

    cout << "Nilai setelah pemanggilan fungsi Vtukar : "<< endl;
    cout << "Nilai bilangan 1 = " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
    cout << "Nilai bilangan 2 = " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
    cout << endl;

    return EXIT_SUCCESS;
}

// #include <iostream>
// using namespace std;

// void Vtukar(int& bil1, int& bil2)
// {
//     int temp;
//     temp = bil1;
//     bil1 = bil2;
//     bil2 = temp;

//     cout << "Nilai pada saat berada di fungsi Vtukar : " << endl;
//     cout << "Nilai Bilangan 1 : " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
//     cout << "Nilai Bilangan 2 : " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
//     cout << endl;
// }

// int main()
// {
//     int bil1, bil2;
//     bil1 = 7;
//     bil2 = 6;

//     cout << "\tCALL BY REFERENCE" << endl;
//     cout << "\t-----------------" << endl;
//     cout << "\nNilai sebelum pemanggilan fungsi Vtukar : " << endl;
//     cout << "Nilai bilangan 1 = " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
//     cout << "Nilai bilangan 2 = " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
//     cout << endl;

//     Vtukar(bil1, bil2);

//     cout << "Nilai setelah pemanggilan fungsi Vtukar : " << endl;
//     cout << "Nilai bilangan 1 = " << bil1 << "| Alamat bilangan 1 = " << &bil1 << endl;
//     cout << "Nilai bilangan 2 = " << bil2 << "| Alamat bilangan 2 = " << &bil2 << endl;
//     cout << endl;

//     return EXIT_SUCCESS;
// }
