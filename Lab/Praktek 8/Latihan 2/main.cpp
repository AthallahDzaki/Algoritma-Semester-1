#include <iostream>
using namespace std;

void PrintBiodata(string nama, int nim, char Kelamin)
{
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Jenis Kelamin: " << Kelamin << endl;
}

int main()
{
    string nama;
    int nim;
    char Kelamin;
    cout << "------- Input Biodata Mahasiswa -------" << endl;
    cout << "Nama: ";
    getline(cin, nama);
    cout << "NIM: ";
    cin >> nim;
    cout << "Jenis Kelamin (L/P): ";
    cin.ignore();
    cin >> Kelamin;
    if(Kelamin != 'L' && Kelamin != 'P')
    {
        cout << "Jenis kelamin tidak valid!" << endl;
        return 1;
    }
    cout << "------- Input Biodata Mahasiswa -------" << endl;
    PrintBiodata(nama, nim, Kelamin);
    cout << "---------------------------------------" << endl;
}