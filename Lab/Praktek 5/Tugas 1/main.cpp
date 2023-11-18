#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int total = 0, suku;

    cout << "\t Program Perpangkatan 3" << endl;
    
    cout << endl;

    cout << "Masukkan suku ke-";
    cin >> suku;

    cout << endl;

    if(suku < 1) {
        cout << "Suku tidak boleh kurang dari 1" << endl; // Dont Waste My MEMORY!!!!
        return 0;
    }

    for (int i = 1; i <= suku; i++) {
        int cube = pow(3, i);
        total += cube;
        cout << cube << " ";
    }
    cout << endl;

    cout << "Total: " << total << endl;

    return 0;
}
