/* -------------------------- */
/* Penggunaan Variabel Statis */
/* -------------------------- */

#include <iostream>
using namespace std;

void walah();  // prototipe fungsi walah

int main(){
    int k = 5;
    walah();
    walah();
    cout <<"\nNilai K didalam fungsi main() = " <<k;
}
void walah()
{
    static int k;  // deklarasi variabel statis
    k += 4;
    cout << "\nNilai K didalam fungsi() = " << k;
}