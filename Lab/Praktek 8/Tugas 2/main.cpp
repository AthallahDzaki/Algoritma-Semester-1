#include <iostream>
using namespace std;

void buatKotak(int sisi) {
    for(int i = 1; i <= sisi; i++)
    {
        for(int j = 1; j <= sisi; j++)
        {
            if(i == 1 || i == sisi || j == 1 || j == sisi)
            {
                cout << sisi << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int sisi;
    cout << "Masukkan Jumlah Sisi : ";
    cin >> sisi;

    buatKotak(sisi);

    return 0;
}
