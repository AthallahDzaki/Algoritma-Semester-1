#include <iostream>
using namespace std;

string ReturnGrade(int nilai)
{
    string grade;
    if(nilai >= 80)
    {
        grade = "A";
    }
    else if(nilai >= 70)
    {
        grade = "B";
    }
    else if(nilai >= 60)
    {
        grade = "C";
    }
    else if(nilai >= 50)
    {
        grade = "D";
    }
    else
    {
        grade = "E";
    }
    return grade;
}

int main() {
    cout << "Program Daftar Nilai Mahasiswa" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
    int banyakData;
    cout << "Masukkan Banyak Mahasiswa : ";
    cin >> banyakData;
    cout << endl;
    string DataMahasiswa[banyakData][3];
    for(int i = 0; i < banyakData; i++)
    {
        cout << "Masukkan Nama Mahasiswa ke-" << i + 1 << ": ";
        cin >> DataMahasiswa[i][0];
        cout << "Masukkan NIM Mahasiswa ke-" << i + 1 << ": ";
        cin >> DataMahasiswa[i][1];
        cout << "Masukkan Nilai Mahasiswa ke-" << i + 1 << ": ";
        cin >> DataMahasiswa[i][2];
        cout << endl;
    }
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
    cout << "Daftar Nilai Mahasiswa" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
    cout << "No \t| Nama \t\t| NIM \t\t| Nilai \t| Grade" << endl;
    cout << "----------------------------------------------------------" << endl;
    for(int j = 0; j < banyakData; j++)
    {
        cout << j + 1 << "\t| " << DataMahasiswa[j][0] << "\t\t| " << DataMahasiswa[j][1] << "\t| " << DataMahasiswa[j][2] << "\t\t| " << ReturnGrade(stoi(DataMahasiswa[j][2])) << endl;
    }
    cout << "----------------------------------------------------------" << endl;
    return 0;

}