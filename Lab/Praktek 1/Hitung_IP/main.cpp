#include <iostream>
#include <string>
using namespace std;
int main () {
	int nim,
        absen,
        tugas, 
        uts, 
        uas, 
        nilai_absen,
        nilai_tugas, 
        nilai_uts,
        nilai_uas;
    float total;

	cout << "DAFTAR NILAI MAHASISWA" << endl;
	cout << endl;
    cout << "Masukan NIM : ";
	cin >> nim;
    cout << "Masukkan Berapa Kali Siswa Tidak Hadir : ";
    cin >> absen;
    absen = 16-absen;
	cout << "Masukan Nilai Tugas : ";
	cin >> tugas;
	cout << "Masukan Nilai UTS : ";
	cin >> uts;
	cout << "Masukan Nilai UAS : ";
	cin >> uas;

    nilai_absen=0.20*absen*6.25;
	nilai_tugas=0.20*tugas;
	nilai_uts=0.30*uts;
	nilai_uas=0.30*uas;

	cout << "---------------------------------------------------" <<endl;
	cout << "Nilai Presensi\tNilai Tugas\tNilai UTS\tNilai UAS" <<endl;
	cout << "---------------------------------------------------" <<endl;
	cout << absen << "x 20% = " << nilai_absen << "\t" << tugas << " x 20% = " << nilai_tugas << "\t" << uts << " x 30% = " << nilai_uts << "\t" << uas << " x 30% = " << nilai_uas << "\t" <<endl;
	cout << endl;

	total = (nilai_tugas+nilai_uts+nilai_uas+nilai_absen);

	cout<<"--------------------------------------------------"<<endl;
	cout<<"Total Nilai IP Anda Anda = "<<total/25<<endl;
	cout<<"--------------------------------------------------"<<endl;
}
