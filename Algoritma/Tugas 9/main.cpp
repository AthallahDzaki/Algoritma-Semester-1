#include <iostream>
using namespace std;

float rataRata(int nilai[], int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return total / jumlah;
}

int nilaiTertinggi(int nilai[], int jumlah) {
    int tertinggi = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
    }
    return tertinggi;
}

int nilaiTerendah(int nilai[], int jumlah) {
    int terendah = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }
    return terendah;
}

int main() {
    cout << "Program Penilaian Siswa" << endl;
    cout << "========================" << endl;
    int jumlahSiswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;
    int nilaiSiswa[jumlahSiswa];
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan nilai siswa ke-" << i + 1 << ": ";
        cin >> nilaiSiswa[i];
    }
    cout << "========================" << endl;
    cout << "Nilai Rata-rata: " << rataRata(nilaiSiswa, jumlahSiswa) << endl;
    cout << "Nilai tertinggi: " << nilaiTertinggi(nilaiSiswa, jumlahSiswa) << endl;
    cout << "Nilai terendah: " << nilaiTerendah(nilaiSiswa, jumlahSiswa) << endl;
    return 0;
}