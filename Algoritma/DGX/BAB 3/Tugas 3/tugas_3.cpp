#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Mengecek apakah bilangan positif atau negatif
    if (bilangan > 0) {
        cout << "Bilangan ini adalah positif." << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan ini adalah negatif." << endl;
    } else {
        cout << "Bilangan ini adalah nol." << endl;
    }

    return 0;
}