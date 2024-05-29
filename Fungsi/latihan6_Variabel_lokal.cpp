/* -------------- */
/* Variabel Lokal */
/* -------------- */

#include <iostream>
using namespace std;

void lokal();
main (){
    int a = 15;

    cout << "Pemanggilan Variabel Lokal"<< endl;
    cout << "\nNilai di dalam fungsi main()   = " << a;
    lokal();
    cout << "\nNilai di dalam fungsi main()   = " << a;
}

void lokal()
{
    int a = 10;
    cout << "\nNilai a di dalam fungsi lokal() = " << a;
}