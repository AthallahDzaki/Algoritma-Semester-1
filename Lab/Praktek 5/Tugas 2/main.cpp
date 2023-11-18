#include <iostream>
using namespace std;

int main()
{
    int pilihan, banyak;
    string kendaraan;

    cout << "DATA BULANAN PENJUALAN KENDARAAN" << endl;
    cout << endl;
    cout << "1. Honda" << endl;
    cout << "2. Yamaha" << endl;
    cout << "3. Kawasaki" << endl;
    cout << "4. KTM" << endl;
    cout << "5. Suzuki" << endl;
    cout << endl;
    cout << "Masukkan pilihan anda : ";

    cin >> pilihan;
    switch(pilihan)
    {
        case 1:
            kendaraan = "Honda";
            break;
        case 2:
            kendaraan = "Yamaha";
            break;
        case 3:
            kendaraan = "Kawasaki";
            break;
        case 4:
            kendaraan = "KTM";
            break;
        case 5:
            kendaraan = "Suzuki";
            break;
        default:
            cout << " Kendaraan Tidak ada";
            return 0;
    }

    cout << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "Input Data Kendaraan " << kendaraan << " : ";
    cin >> banyak;
    for(int i = 0; i < banyak; i++)
    {
        int pembelian;
        cout << "Pembeli Ke- " << i + 1 << " : ";
        cin >> pembelian;
        cin.ignore();
    }
}