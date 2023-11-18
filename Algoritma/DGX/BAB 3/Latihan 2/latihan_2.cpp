#include <iostream>
using namespace std;

int main() {
    int bulan;
    cout << "Program Bulan" << endl;
    cout << "Masukkan nomor bulan (1-12): ";
    cin >> bulan;

    if (bulan == 1) {
        cout << "Bulan ke " << bulan << " adalah bulan Januari" << endl;
    } else if (bulan == 2) {
        cout << "Bulan ke " << bulan << " adalah bulan Februari" << endl;
    } else if (bulan == 3) {
        cout << "Bulan ke " << bulan << " adalah bulan Maret" << endl;
    } else if (bulan == 4) {
        cout << "Bulan ke " << bulan << " adalah bulan April" << endl;
    } else if (bulan == 5) {
        cout << "Bulan ke " << bulan << " adalah bulan Mei" << endl;
    } else if (bulan == 6) {
        cout << "Bulan ke " << bulan << " adalah bulan Juni" << endl;
    } else if (bulan == 7) {
        cout << "Bulan ke " << bulan << " adalah bulan Juli" << endl;
    } else if (bulan == 8) {
        cout << "Bulan ke " << bulan << " adalah bulan Agustus" << endl;
    } else if (bulan == 9) {
        cout << "Bulan ke " << bulan << " adalah bulan September" << endl;
    } else if (bulan == 10) {
        cout << "Bulan ke " << bulan << " adalah bulan Oktober" << endl;
    } else if (bulan == 11) {
        cout << "Bulan ke " << bulan << " adalah bulan November" << endl;
    } else if (bulan == 12) {
        cout << "Bulan ke " << bulan << " adalah bulan Desember" << endl;
    } else {
        cout << "Nomor bulan tidak valid" << endl;
    }

    return 0;
}
