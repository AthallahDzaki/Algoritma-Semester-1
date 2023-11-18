#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float alas, tinggi, tinggi_prisma, luas, volume;

    cout << "Menu Pilihan" << endl;
    cout << "1. Menghitung Luas Segitiga" << endl;
    cout << "2. Menghitung Volume Prisma Segitiga" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;

        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga adalah " << luas << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
        cout << "Masukkan tinggi prisma segitiga: ";
        cin >> tinggi_prisma;

        volume = 0.5 * alas * tinggi * tinggi_prisma;
        cout << "Volume prisma segitiga adalah " << volume << endl;
    } else {
        cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}