#include <iostream>
using namespace std;

int main() {
    float alas, tinggiSegitiga, tinggiPrisma;
    int pilihan;

    cout << "Menu Hitung\n";
    cout << "1. Luas Segitiga\n";
    cout << "2. Volume Prisma Segitiga\n";
    cout << "Pilih menu (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggiSegitiga;

        float luasSegitiga = 0.5 * alas * tinggiSegitiga;
        cout << "Luas segitiga adalah " << luasSegitiga << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggiSegitiga;
        cout << "Masukkan tinggi prisma: ";
        cin >> tinggiPrisma;

        float volumePrisma = 0.5 * alas * tinggiSegitiga * tinggiPrisma;
        cout << "Volume prisma segitiga adalah " << volumePrisma << endl;
    } else {
        cout << "Pilihan tidak tersedia\n";
    }

    return 0;
}
