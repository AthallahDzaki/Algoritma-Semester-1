#include <iostream>
using namespace std;

void GrafikData(int nomor, string nama, int nilai)
{
    cout << nomor << ". " << nama << " : ";
    for(int i = 0; i < nilai; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int banyakData;
    cout << "Masukkan Banyak Data : ";
    cin >> banyakData;
    string DataSiswa[banyakData][2];
    for(int i = 0; i < banyakData; i++)
    {
        cout << "Masukkan Nama Siswa ke-" << i + 1 << ": ";
        cin >> DataSiswa[i][0];
        cout << "Masukkan Nilai Siswa ke-" << i + 1 << ": ";
        cin >> DataSiswa[i][1];
    }
    cout << "------------------------------------------------" << endl;
    cout << endl;
    cout << "Grafik Data" << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;
    for(int j = 0; j < banyakData; j++)
    {
        GrafikData(j + 1, DataSiswa[j][0], stoi(DataSiswa[j][1]));
    }
    return 0;
}