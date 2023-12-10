#include <iostream>
using namespace std;

int main()
{
    int NilaiTertinggi = 0, NilaiTerendah = 100, TotalNilai = 0, BanyakSiswa;
    cout << "Masukkan Banyak Siswa Setiap Kelas : ";
    cin >> BanyakSiswa;
    for(int j = 0; j < 3; j++)
    {
        cout << "Siswa Kelas " << char(65 + j) << endl;
        for(int i = 1; i <= BanyakSiswa; i++)
        {
            int Nilai;
            cout << "Masukkan Nilai Siswa Ke-" << i << " : ";
            cin >> Nilai;
            if(Nilai > NilaiTertinggi)
            {
                NilaiTertinggi = Nilai;
            }
            else if(Nilai < NilaiTerendah)
            {
                NilaiTerendah = Nilai;
            }
            TotalNilai += Nilai;
        }
    }
    cout << "Nilai Tertinggi : " << NilaiTertinggi << endl;
    cout << "Nilai Terendah : " << NilaiTerendah << endl;
    cout << "Rata-Rata Nilai : " << TotalNilai / (BanyakSiswa * 3) << endl;
    return 0;
}