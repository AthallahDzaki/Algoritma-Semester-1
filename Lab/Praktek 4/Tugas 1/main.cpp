#include <iostream>
using namespace std;

int main() {
    char tipe_kamar;
    int jumlah_hari;
    int harga_kamar, total_pembayaran, pajak;

    cout << "Tipe Kamar \t\tPrice" << endl;
    cout << "a. Standart Room\tRp.150.000" << endl;
    cout << "b. Superior Room\tRp.490.000" << endl;
    cout << "c. Deluxe Room\t\tRp.750.000" << endl;
    cout << "d. Suite Room\t\tRp.1.550.000" << endl;
    cout << "e. Single Room\t\tRp.700.000" << endl;
    cout << "Masukkan pilihan tipe kamar (a-e): ";
    cin >> tipe_kamar;

    switch (tipe_kamar) {
        case 'a':
            harga_kamar = 150000;
            break;
        case 'b':
            harga_kamar = 490000;
            break;
        case 'c':
            harga_kamar = 750000;
            break;
        case 'd':
            harga_kamar = 1550000;
            break;
        case 'e':
            harga_kamar = 700000;
            break;
        default:
            cout << "Pilihan tipe kamar tidak tersedia" << endl;
            return 0;
    }

    cout << "Masukkan jumlah hari menginap: ";
    cin >> jumlah_hari;

    pajak = harga_kamar * 0.1;
    total_pembayaran = (harga_kamar + pajak) * jumlah_hari;
    cout << "Total pembayaran: Rp." << total_pembayaran << endl;

    return 0;
}
