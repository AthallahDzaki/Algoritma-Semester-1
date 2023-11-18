#include <iostream>

using namespace std;

int main()
{
    int no_hari;
    cout << "Masukkan nomor hari (1..7) :";
    cin >> no_hari;
    switch (no_hari)
    {
        case 1:
            cout << "Hari ke-" << no_hari << " adalah hari Minggu";
            break;
        case 2:
            cout << "Hari ke-" << no_hari << " adalah hari Senin";
            break;
        case 3:
            cout << "Hari ke-" << no_hari << " adalah hari Selasa";
            break;
        case 4:
            cout << "Hari ke-" << no_hari << " adalah hari Rabu";
            break;
        case 5:
            cout << "Hari ke-" << no_hari << " adalah hari Kamis";
            break;
        case 6:
            cout << "Hari ke-" << no_hari << " adalah hari Jumat";
            break;
        case 7:
            cout << "Hari ke-" << no_hari << " adalah hari Sabtu";
            break;
        default:
            cout << "Hari Tidak Ditemukan";
    }
    return 0;
}