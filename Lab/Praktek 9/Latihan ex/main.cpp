#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int baris,kolom;
    for(baris = 0; baris < 3; baris++)
    {
        for(kolom = 0; kolom < 3; kolom++)
        {
            cout << "Masukkan Data Baris ke-" << baris + 1 << " Kolom ke-" << kolom + 1 << ": ";
            cin >> matrix[baris][kolom];
        }
        cout << endl;
    }
    for(baris=0; baris < 3; baris++)
    {
        for(kolom = 0; kolom < 3; kolom++)
        {
            cout << matrix[baris][kolom] << " ";
        }
        cout << endl;
    }
    return 0;
}