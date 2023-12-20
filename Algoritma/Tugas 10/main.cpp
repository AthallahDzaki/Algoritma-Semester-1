#include <iostream>
using namespace std;

float RataRata(int nilai_siswa[][3], int jumlah_siswa, int kelas) {
    float total = 0;
    for(int i = 0; i < jumlah_siswa; i++) {
        total += nilai_siswa[i][kelas];
    }
    return total/jumlah_siswa;
}

float RataRataAll(int nilai_siswa[][3], int jumlah_siswa) {
    float total = 0;
    for(int i = 0; i < jumlah_siswa; i++) {
        for(int j = 0; j < 3; j++) {
            total += nilai_siswa[i][j];
        }
    }
    return total/(jumlah_siswa*3);
}

int maxAll(int nilai_siswa[][3], int jumlah_siswa) {
    int max = nilai_siswa[0][0];
    for(int i = 0; i < jumlah_siswa; i++) {
        for(int j = 0; j < 3; j++) {
            if(nilai_siswa[i][j] > max) {
                max = nilai_siswa[i][j];
            }
        }
    }
    return max;
}

int minAll(int nilai_siswa[][3], int jumlah_siswa) {
    int min = maxAll(nilai_siswa, jumlah_siswa);
    for(int i = 0; i < jumlah_siswa; i++) {
        for(int j = 0; j < 3; j++) {
            if(nilai_siswa[i][j] < min) {
                min = nilai_siswa[i][j];
            }
        }
    }
    return min;
}

int max(int nilai_siswa[][3], int jumlah_siswa, int kelas) {
    int max = nilai_siswa[0][kelas];
    for(int i = 0; i < jumlah_siswa; i++) {
        if(nilai_siswa[i][kelas] > max) {
            max = nilai_siswa[i][kelas];
        }
    }
    return max;
}

int min(int nilai_siswa[][3], int jumlah_siswa, int kelas) {
    int min = max(nilai_siswa, jumlah_siswa, kelas);
    for(int i = 0; i < jumlah_siswa; i++) {
        if(nilai_siswa[i][kelas] < min) {
            min = nilai_siswa[i][kelas];
        }
    }
    return min;
}

int main() {
    cout << "Program Nilai Siswa Per-Kelas" << endl;
    cout << "=============================" << endl;
    cout << "Masukkan Jumlah Siswa Masing-Masing Kelas : ";
    int jumlah_siswa;
    cin >> jumlah_siswa;
    int nilai_siswa[jumlah_siswa][3];
    for(int i = 0; i < 3; i++) {
        cout << "Data Siswa Kelas " << i+1 << endl;
        for(int j= 0; j < jumlah_siswa; j++) {
            cout << "Masukkan Nilai Siswa " << j+1 << " : ";
            cin >> nilai_siswa[j][i];
        }
    }
    cout << "=============================" << endl;
    cout << "Rata-Rata Nilai Siswa Kelas 1 : " << RataRata(nilai_siswa, jumlah_siswa, 0) << endl;
    cout << "Rata-Rata Nilai Siswa Kelas 2 : " << RataRata(nilai_siswa, jumlah_siswa, 1) << endl;
    cout << "Rata-Rata Nilai Siswa Kelas 3 : " << RataRata(nilai_siswa, jumlah_siswa, 2) << endl;
    cout << "=============================" << endl;

    cout << "=============================" << endl;
    cout << "Nilai Tertinggi Siswa Kelas 1 : " << max(nilai_siswa, jumlah_siswa, 0) << endl;
    cout << "Nilai Tertinggi Siswa Kelas 2 : " << max(nilai_siswa, jumlah_siswa, 1) << endl;
    cout << "Nilai Tertinggi Siswa Kelas 3 : " << max(nilai_siswa, jumlah_siswa, 2) << endl;
    cout << "=============================" << endl;

    cout << "=============================" << endl;
    cout << "Nilai Terrendah Siswa Kelas 1 : " << min(nilai_siswa, jumlah_siswa, 0) << endl;
    cout << "Nilai Terrendah Siswa Kelas 2 : " << min(nilai_siswa, jumlah_siswa, 1) << endl;
    cout << "Nilai Terrendah Siswa Kelas 3 : " << min(nilai_siswa, jumlah_siswa, 2) << endl;
    cout << "=============================" << endl;

    cout << "=============================" << endl;
    cout << "Rata-Rata Nilai Siswa Seluruhnya : " << RataRataAll(nilai_siswa, jumlah_siswa) << endl;
    cout << "=============================" << endl;

    cout << "=============================" << endl;
    cout << "Nilai Tertinggi Siswa Seluruhnya : " << maxAll(nilai_siswa, jumlah_siswa) << endl;
    cout << "=============================" << endl;

    cout << "=============================" << endl;
    cout << "Nilai Terrendah Siswa Seluruhnya : " << minAll(nilai_siswa, jumlah_siswa) << endl;
    cout << "=============================" << endl;

    return 0;
}