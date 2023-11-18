#include <iostream>
#include <string>

using namespace std;

int main() {
    int umur;
    string nama;

    cout << "Apakah Kamu Boleh Pacaran?\n\n";

    cout << "Masukkan Namamu: ";
    getline(cin, nama);

    cout << "Masukkan Umurmu: ";
    cin >> umur;

    if (umur < 18) {
        cout << "Halo " << nama << ", Kamu masih muda untuk pacaran. Fokuslah pada studi dan nikmati masa mudamu!\n";
    } else {
        cout << "Halo " << nama << ", Kamu sudah cukup umur untuk pacaran.\nIngatlah untuk selalu memprioritaskan studi dan pertumbuhan pribadimu!\n";
    }

    return 0;
}
