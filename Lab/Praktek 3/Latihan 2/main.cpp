#include <iostream>
using namespace std;

int main() {
    int bulan;
    cout  << "=== Program Penentu Bulan ===" << endl;
    cout << "Masukkan nomor bulan (1-12): ";
    cin >> bulan;

    if (bulan == 1) cout << "Bulan ke " << bulan << " adalah Januari" << endl;
    else if (bulan == 2) cout << "Bulan ke " << bulan << " adalah Februari" << endl;
    else if (bulan == 3) cout << "Bulan ke " << bulan << " adalah Maret" << endl;
    else if (bulan == 4) cout << "Bulan ke " << bulan << " adalah April" << endl;
    else if (bulan == 5) cout << "Bulan ke " << bulan << " adalah Mei" << endl;
    else if (bulan == 6) cout << "Bulan ke " << bulan << " adalah Juni" << endl;
    else if (bulan == 7) cout << "Bulan ke " << bulan << " adalah Juli" << endl;
    else if (bulan == 8) cout << "Bulan ke " << bulan << " adalah Agustus" << endl;
    else if (bulan == 9) cout << "Bulan ke " << bulan << " adalah September" << endl;
    else if (bulan == 10) cout << "Bulan ke " << bulan << " adalah Oktober" << endl;
    else if (bulan == 11) cout << "Bulan ke " << bulan << " adalah November" << endl;
    else if (bulan == 12) cout << "Bulan ke " << bulan << " adalah Desember" << endl;
    else cout << "Bulan ke " << bulan << " Tidak Ada" << endl;

    return 0;
}
