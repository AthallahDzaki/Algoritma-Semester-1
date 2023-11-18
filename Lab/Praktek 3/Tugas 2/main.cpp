#include <iostream>
using namespace std;

int main() {
    int nilai;
    string nama;
    char grade;
    cout << "=== Program Pemberi Grade Nilai ===\n";
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        grade = 'X';
    } else if (nilai >= 80) {
        grade = 'A';
    } else if (nilai >= 60) {
        grade = 'B';
    } else if (nilai >= 40) {
        grade = 'C';
    } else if (nilai >= 20) {
        grade = 'D';
    } else if (nilai >= 10) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    if(grade != 'X')
        cout << "Selamat " << nama << " Grade Anda Adalah " << grade << endl;
    else
        cout << "Nilai tidak valid\n";

    return 0;
}
