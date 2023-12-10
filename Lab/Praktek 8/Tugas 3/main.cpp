#include <iostream>

using namespace std;

void UlangiKata(string kata, int jumlah) {
    for(int i = 0; i < jumlah; i++) {
        cout << kata << endl;
    }
}

int main() {
    cout << " PROGRAM PENGULANG KATA " << endl;
    cout << "Masukkan kata: ";
    string kata;
    getline(cin, kata);
    cout << "Masukkan jumlah pengulangan: ";
    int jumlah;
    cin >> jumlah;
    UlangiKata(kata, jumlah);
    return 0;
}