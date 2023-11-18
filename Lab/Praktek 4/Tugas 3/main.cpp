#include <iostream>

using namespace std;

int main() {
    int pilihan_meja, pilihan_menu, jumlah_uang;
    string nama;
    
    cout << "Daftar Menu Makanan" << endl;
    cout << "1. Nasi Goreng - Rp. 15.000" << endl;
    cout << "2. Mie Goreng - Rp. 12.000" << endl;
    cout << "3. Ayam Goreng - Rp. 20.000" << endl;
    cout << "4. Sate - Rp. 25.000" << endl;

    cout << endl << "Daftar Nomor Meja" << endl;
    cout << "1. Meja 1" << endl;
    cout << "2. Meja 2" << endl;
    cout << "3. Meja 3" << endl;

    
    cout << endl << "Pilih nomor meja: ";
    cin >> pilihan_meja;

    if(pilihan_meja < 1 || pilihan_meja > 3) {
        cout << "Nomor meja tidak tersedia" << endl;
        return 0;
    }
    cout << "Pilih menu makanan: ";
    cin >> pilihan_menu;
    int total_harga;
    switch (pilihan_menu) {
        case 1:
            total_harga = 15000;
            nama = "Nasi Goreng";
            break;
        case 2:
            total_harga = 12000;
            nama = "Mie Goreng";
            break;
        case 3:
            total_harga = 20000;
            nama = "Ayam Goreng";
            break;
        case 4:
            total_harga = 25000;
            nama = "Sate";
            break;
        default:
            cout << "Menu yang dipilih tidak tersedia" << endl;
            return 0;
    }

    cout << "Anda memesan: " << nama << endl;
    cout << "Total harga: Rp. " << total_harga << endl;
    
    cout << "Masukkan jumlah uang: ";
    cin >> jumlah_uang;
    
    if(jumlah_uang < total_harga) {
        cout << "Uang tidak cukup" << endl;
        return 0;
    }

    int kembalian = jumlah_uang - total_harga;

    cout << endl << "Total harga: Rp. " << total_harga << endl;
    cout << "Kembalian: Rp. " << kembalian << endl;

    return 0;
}
