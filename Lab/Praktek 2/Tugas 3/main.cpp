#include <iostream>

using namespace std;

int main() {
    int num, shift;
    
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> num;

    cout << "Masukkan jumlah bit untuk shift (positif untuk left, negatif untuk right): ";
    cin >> shift;

    // Operasi bit shift kiri
    if (shift > 0) {
        int result = num << shift;
        cout << "Hasil bit shift kiri sebanyak " << shift << " bit: " << result << endl;
    }
    // Operasi bit shift kanan
    else if (shift < 0) {
        int result = num >> (-shift);
        cout << "Hasil bit shift kanan sebanyak " << -shift << " bit: " << result << endl;
    }
    // Jika shift = 0, tidak ada perubahan
    else {
        cout << "Tidak ada perubahan. Hasil tetap: " << num << endl;
    }

    return 0;
}