#include <iostream>

using namespace std;

int main() {
    int pilihan;
    float price, nominal, liter;

    cout << "Menu Bahan Bakar" << endl;
    cout << "1. Petromax Turbo (Rp 25.000 / Liter)" << endl;
    cout << "2. Petromax (Rp 18.000 / Liter)" << endl;
    cout << "3. Petrolute (Rp 14.000 / Liter)" << endl;

    cout << "Masukkan pilihan bahan bakar (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            price = 25000;
            cout << "Petromax Turbo : Rp 25.000 / Liter" << endl;
            break;
        case 2:
            price = 18000;
            cout << "Petromax : Rp 18.000 / Liter" << endl;
            break;
        case 3:
            price = 14000;
            cout << "Petrolute : Rp 14.000 / Liter" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            return 1;
    }

    cout << "Masukkan nominal yang anda inginkan : ";
    cin >> nominal;
    if(nominal < 0) {
        cout << "Nominal tidak valid" << endl;
        return 1;
    }

    cout << "Total yang anda dapatkan : " << nominal / price << " Liter" << endl;

    return 0;
}
