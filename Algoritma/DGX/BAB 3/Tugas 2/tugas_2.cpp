#include <iostream>
using namespace std;

int main() {
    int nilai;
    char grade;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 0 && nilai <= 9) {
        grade = 'F';
    } else if (nilai >= 10 && nilai <= 19) {
        grade = 'E';
    } else if (nilai >= 20 && nilai <= 39) {
        grade = 'D';
    } else if (nilai >= 40 && nilai <= 59) {
        grade = 'C';
    } else if (nilai >= 60 && nilai <= 79) {
        grade = 'B';
    } else if (nilai >= 80 && nilai <= 100) {
        grade = 'A';
    } else {
        cout << "Error / Inputan Salah" << endl;
        return 1; // Keluar dari program jika input tidak valid
    }

    cout << "Grade yang didapatkan: " << grade << endl;

    return 0;
}