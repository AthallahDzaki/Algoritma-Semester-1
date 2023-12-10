#include <iostream>
using namespace std;

int main() {

    int banyakSiswa;
    cout << "Masukkan Banyak Siswa : ";
    cin >> banyakSiswa;
    int tinggiSiswa[banyakSiswa], TinggiSemuaSiswa = 0;
    for(int i = 0; i < banyakSiswa; i++)
    {
        cout << "Masukkan Tinggi Siswa ke-" << i + 1 << ": ";
        cin >> tinggiSiswa[i];
    }
    cout << "------------------------------------------------" << endl;
    cout << endl;
    int Tertinggi = 0, Terrendah = 0;
    for(int j = 0; j < banyakSiswa; j++)
    {
        if(tinggiSiswa[j] > Tertinggi)
        {
            Tertinggi = tinggiSiswa[j];
            Terrendah = Tertinggi;
        }
        TinggiSemuaSiswa+=tinggiSiswa[j];
    }
    
    for(int k = 0; k < banyakSiswa; k++)
    {
        if(tinggiSiswa[k] < Terrendah)
        {
            Terrendah = tinggiSiswa[k];
        }
    }
    
    cout << "Tinggi Siswa Tertinggi : " << Tertinggi << " CM" << endl;
    cout << "Tinggi Siswa Terrendah : " << Terrendah << " CM" <<endl;
    cout << "Rata-Rata Tinggi Siswa : " << TinggiSemuaSiswa/banyakSiswa << " CM" << endl;
    return 0;
}