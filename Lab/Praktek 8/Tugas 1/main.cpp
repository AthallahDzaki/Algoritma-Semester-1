#include <iostream>

using namespace std;

int KalkulasiKubus(int sisi) {
    return (sisi * sisi * sisi);
}

int KalkulasiBalok(int panjang, int lebar, int tinggi) {
    return (panjang * lebar * tinggi);
}

float KalkulasiTabung(int jariJari, int tinggi) {
    return (3.14 * (jariJari * jariJari) * tinggi);
}

float KalkulasiKerucut(int jariJari, int tinggi) {
    return (0.33 * 3.14 * (jariJari * jariJari) * tinggi);
}

int main() {
    cout << " ==== PROGRAM PENCARI VOLUME BANGUN RUANG ==== " << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Tabung" << endl;
    cout << "4. Kerucut" << endl;
    cout << "5. Exit" << endl;
    cout << "Pilih bangun ruang: ";
    int bangunRuang;
    cin >> bangunRuang;
    switch (bangunRuang) {
        case 1: {
            cout << "Masukkan panjang sisi: ";
            int sisi;
            cin >> sisi;
            cout << "Volume kubus: " << KalkulasiKubus(sisi) << " cm^3" << endl;
            break;
        }
        case 2: {
            cout << "Masukkan panjang: ";
            int panjang;
            cin >> panjang;
            cout << "Masukkan lebar: ";
            int lebar;
            cin >> lebar;
            cout << "Masukkan tinggi: ";
            int tinggi;
            cin >> tinggi;
            cout << "Volume balok: " << KalkulasiBalok(panjang, lebar, tinggi) << " cm^3" << endl;
            break;
        }
        case 3: {
            cout << "Masukkan jari-jari: ";
            int jariJari;
            cin >> jariJari;
            cout << "Masukkan tinggi: ";
            int tinggi;
            cin >> tinggi;
            cout << "Volume tabung: " << KalkulasiTabung(jariJari, tinggi) << " cm^3" << endl;
            break;
        }
        case 4: {
            cout << "Masukkan jari-jari: ";
            int jariJari;
            cin >> jariJari;
            cout << "Masukkan tinggi: ";
            int tinggi;
            cin >> tinggi;
            cout << "Volume kerucut: " << KalkulasiKerucut(jariJari, tinggi) << " cm^3" << endl;
            break;
        }
        case 5: {
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            return 0;
        }
        default: {
            cout << "Pilihan tidak tersedia!" << endl;
            break;
        }
    }
    return 0;
}