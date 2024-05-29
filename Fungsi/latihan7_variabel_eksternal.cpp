/* ------------------------------ */
/* Variabel Eksternal atau Global */
/* ------------------------------ */

#include <iostream>
using namespace std;

int a = 6;  // Deklarasi variabel eksternal

void lokal();
int main(){
    cout << "Penggunaan Variabel Eksternal" << endl;

    cout <<"\nNilai di dalam fungsi main() = "<< a;
    lokal();  // Pemanggilan fungsi lokal
    cout << "\nNilai Setelah panggilan fungsi local() = "<< a;
}

void lokal()
{
    a += 10;
}