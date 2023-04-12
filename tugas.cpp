#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== Program Perulangan ===" << endl;
    string teks;
    int jumlah;
    cout << "Masukkan Teks : ";
    getline(cin, teks);
    cout << "Jumlah Diulang : ";
    cin >> jumlah;
    cout << "==========================" << endl;

    // menggunakan for loop
    for (int i = 1; i <= jumlah; i++) {
        cout << teks << " ke- " << i << endl;
    }

    cout << "==========================" << endl;

    // menggunakan while loop
    char ulang;
    cout << "Ulangi (Y/T) : ";
    cin >> ulang;
    while (toupper(ulang) == 'Y') {
        for (int i = 1; i <= jumlah; i++) {
            cout << teks << " ke- " << i << endl;
        }
        cout << "==========================" << endl;
        cout << "Ulangi (Y/T) : ";
        cin >> ulang;
    }

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}
