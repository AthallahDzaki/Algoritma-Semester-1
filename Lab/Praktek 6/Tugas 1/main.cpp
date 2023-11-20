#include <iostream>

using namespace std;

int main() {
    int kelipatan = 0, nilai_akhir = 0;
    cout << "===== 2318026 || ATHALLAH DZAKI =====" << endl << endl;
    cout << "Masukkan Nilai Kelipatan : ";
    cin >> kelipatan;
    cout << "Masukkan Nilai Akhir : ";
    cin >> nilai_akhir;
    int i = 1;
    while(i <= nilai_akhir)
    {
        if(i % kelipatan != 0)
            cout << i << " ";
        else
            cout << "*" << " ";
        i++;
    }
}