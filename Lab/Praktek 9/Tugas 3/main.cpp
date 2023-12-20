#include <iostream>

using namespace std;

int main() {
    int baris, kolom;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int myArray[baris][kolom];

    // Input nilai untuk array
    cout << "Masukkan nilai untuk array 2 dimensi:\n";
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << "Masukkan nilai untuk baris ke-" << i + 1 << " dan kolom ke-" << j + 1 << ": ";
            cin >> myArray[i][j];
        }
        cout << endl;
    }

    // Menampilkan array dan menggunakan statement if-else
    cout << "\nArray 2 dimensi yang dimasukkan:\n";
    for (int i = 0; i < baris; ++i) {
        cout << "Baris ke-" << i + 1 << ": ";
        for (int j = 0; j < kolom; ++j) {
            cout << myArray[i][j] << " ";

            // Contoh penggunaan if-else
            if (myArray[i][j] % 2 == 0) {
                cout << "(genap) ";
            } else {
                cout << "(ganjil) ";
            }
        }
        cout << endl;
    }

    return 0;
}