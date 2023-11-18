#include <iostream>

using namespace std;

int main() {
    string nama;
    int gaji_pokok;
    char status;
    cout << "===== PROGRAM GAJI =====" << endl;
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama);
    cout << "Masukkan gaji pokok: Rp.";
    cin >> gaji_pokok;
    cout << "Apakah Sudah Menikah? (y/n): ";
    cin >> status;
    cout << "===== HASIL PERHITUNGAN =====" << endl;
    cout << "Nama Karyawan: " << nama << endl;
    cout << fixed; // agar hasilnya tetap tidak ada 1e+06 dan sebagainya
    if(char(tolower(status)) == 'y')
    {
        gaji_pokok += (gaji_pokok * 0.20);
        cout << "Gaji Pokok: Rp." << gaji_pokok << endl;
    }
    else
        cout << "Gaji Pokok: Rp." << gaji_pokok << endl;
    return 0;
}