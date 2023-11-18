#include <iostream>
using namespace std;
#define tahun 2023 // Removing #cons menjadi #define akan menjadikan #define yaitu sebuah preprocessor directive yang digunakan untuk mendefinisikan sebuah konstanta. #define digunakan untuk mendefinisikan sebuah konstanta yang dapat digunakan di dalam program

int main(){
#ifdef tahun
    #undef tahun // (Macro Tambahan untuk mendeteksi apakah #define tahun sudah di definisikan atau belum)
    cout << "Processor Directive Tahun Telah Dihapus" << endl;
    int tahun;
#endif
    cout << "Masukan Tahun Saat Ini : "; // Cout harusnya cout. Serta panah operator mengarah ke kiri bukan ke dua arah.
    cin >> tahun; // CIN harusnya cin. Serta panah operator mengarah ke kiri bukan ke kanan. variable tahun wajib untuk melepeas status macro dari define dan menjadikannya variable biasa.
    cout << "Praktikum Algoritma Tahun Ajaran " << tahun << "/" << tahun + 1; // Praktikum Algoritma Tahun Ajaran  >> tahun << "/" >> tahun + 1; // Cout harusnya cout. Serta panah operator mengarah ke kiri bukan ke dua arah. Kurangnya tanda petik 2 pada "Praktikum algorimat tahun ajaran. Arah operator semuanya harus mengarah ke kiri
    return 0; // Return harusnya return. Serta huruf T harus lowercase
}