#include <iostream>
using namespace std;

int main() {
    int ulang;
    cout << "\tINI PROGRAM LOH" << endl;
    cout << "Masukkan berapa kali aku harus mengulanginya : ";
    cin >> ulang;
    cout << endl;
    if(ulang < 1) {
        cout << "Jangan menyuruhku mengulang kurang dari 1, Memoryku Kau Makan Nanti!!" << endl;
        return 0;
    }
    for(int i = 1; i <= ulang; i++) {
        cout << "I Lop Yu ke-" << i << endl;
    }
}
