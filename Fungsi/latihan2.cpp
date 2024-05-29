// Penggunaan Prototipe Pada Fungsi
#include <iostream>
using namespace std;
#include <cstring>  // untuk strcpy

char coment (char ket[30], int n);  // prototipe fungsi

int main ()
{
    char lagi, c[30];
    int i;

    atas :
    {
    cout << "Masukan Nilai = ";
    cin >> i;
    coment(c,i);  // parameter formal
    cout << c;
    cout << "\n\nIngin Input lagi ? [Y/T] : ";
    cin >> lagi;
    }

    if (lagi == 'Y'  ||  lagi == 'y')
    {
    goto atas;
    }
    else
    {
    cout << "Oke, ngga jadi";
    }
}

    // Blok program fungsi dengan parameter aktual

    char coment(char ket[30], int n)
    {
        int a;
        a = n % 2;

        if (a == 1)
        {
        strcpy (ket, "--- Bilangan Ganjil ----");
        }
        else
        {
        strcpy (ket, "--- Bilangan Genap ----");
        }
    }