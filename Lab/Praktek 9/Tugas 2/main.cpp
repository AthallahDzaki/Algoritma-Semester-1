#include <iostream>
using namespace std;

string getPatientStatus(int sistolik, int diastolik)
{
    if(sistolik > 140 && diastolik > 80)
        return "Hipertensi";
    else if(sistolik < 90 && diastolik < 60)
        return "Hipotensi";
    else
        return "Normal";
}

int main() {
    cout << "PROGRAM RUMAH SAKIT" << endl << endl;

    int jumlahPasien, jumlahRuangan;
    cout << "Masukkan Jumlah Ruangan : ";
    cin >> jumlahRuangan;
    cout << "Masukkan Jumlah Pasien : ";
    cin >> jumlahPasien;
    cout << endl;

    string namaPasien[jumlahRuangan][jumlahPasien];
    int sistolikPasien[jumlahRuangan][jumlahPasien], diastolikPasien[jumlahRuangan][jumlahPasien];

    for(int i = 0; i < jumlahRuangan; i++)
    {
        cout << "Data Pasien Ruangan ke-" << i + 1 << endl << "-------------------------" << endl << endl;
        for(int j = 0; j < jumlahPasien; j++)
        {
            cin.ignore();
            cout << "Masukkan Nama Pasien ke-" << j + 1 << ": ";
            getline(cin, namaPasien[i][j]);
            cout << "Masukkan Nilai Sistolik Pasien ke-" << j + 1 << ": ";
            cin >> sistolikPasien[i][j];
            cout << "Masukkan Nilai Diastolik Pasien ke-" << j + 1 << ": ";
            cin >> diastolikPasien[i][j];
        }
        cout << endl;
    }

    cout << "\t\t ----- OUTPUT DATA PASIEN -----" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << "No.\tNama\t\tSistolik(mmHg)\tDiastolik(mmHg)\tKeterangan" << endl;
    cout << "------------------------------------------------" << endl;
    for(int k = 0; k < jumlahRuangan; k++)
    {
        cout << "Data Pasien Ruangan ke-" << k + 1 << endl << "-------------------------" << endl << endl;
        for(int l = 0; l < jumlahPasien; l++)
        {
            cout << l + 1 << "\t" << namaPasien[k][l] << "\t\t" << sistolikPasien[k][l] << "\t\t" << diastolikPasien[k][l] << "\t\t" << getPatientStatus(sistolikPasien[k][l], diastolikPasien[k][l]) << "\t\t" << endl;
        }
        cout << "------------------------------------------------" << endl;
    }
}