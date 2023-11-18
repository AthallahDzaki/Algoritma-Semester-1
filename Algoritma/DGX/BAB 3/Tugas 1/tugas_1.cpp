#include <iostream>
using namespace std;
int main() {
    int jenis_kelamin;
    float tinggi_badan, berat_badan_ideal;

    cout << "Masukkan jenis kelamin (1 untuk pria, 2 untuk wanita): ";
    cin >> jenis_kelamin;

    if (jenis_kelamin == 1) {
        cout << "Masukkan tinggi badan (cm): ";
        cin >> tinggi_badan;

        if (tinggi_badan <= 0) {
            cout << "Tinggi badan tidak valid" << endl;
        } else {
            berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 0.10);
            cout << "Berat badan ideal anda adalah " << berat_badan_ideal << " kg" << endl;
        }
    } else if (jenis_kelamin == 2) {
        cout << "Masukkan tinggi badan (cm): ";
        cin >> tinggi_badan;

        if (tinggi_badan <= 0) {
            cout << "Tinggi badan tidak valid" << endl;
        } else {
            berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 0.15);
            cout << "Berat badan ideal anda adalah " << berat_badan_ideal << " kg" << endl;
        }
    } else {
        cout << "Jenis kelamin tidak valid" << endl;
    }

    return 0;
}
