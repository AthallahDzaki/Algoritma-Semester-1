#include <iostream>

using namespace std;

int main() {
    cout << "\tKonversi Waktu" << endl << endl;
    int now = 1;
    while(now <= 10)
    {
        int menit = now * 60 ;
        int detik = menit * 60;
        cout << now << " Jam " << menit << " Menit " << detik << " Detik" << endl;
        now++;
    }
}