#include <iostream>

using namespace std;

int main() {
    int nilai_semua = 0, banyak_siswa = 0;
    float rata_rata;
    cout << "===== Program Nilai Siswa =====" << endl;
    cout << "Masukkan banyak siswa: ";
    cin >> banyak_siswa;
    for(int i = 0; i < banyak_siswa; i++)
    {
        int nilainya;
        cout << "Masukkan nilai siswa ke-" << i + 1 << ": ";
        cin >> nilainya;
        nilai_semua += nilainya;
    }
    cout << "===== HASIL PERHITUNGAN =====" << endl;
    cout << "Banyak siswa: " << banyak_siswa << endl;
    cout << "Nilai rata-rata siswa: " << nilai_semua / banyak_siswa << endl;
    return 0;
}