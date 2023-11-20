#include <iostream>
using namespace std;

int main() {
    string input;
    
    while (true) {
        cout << "Apakah Kamu Suka Aku? (harus ya): ";
        cin >> input;
        
        if (input == "ya") {
            break;
        }
        
        cout << "Dibilangi harus ya, aku memaksa!" << endl;
    }
    
    cout << "Terima kasih!" << endl;
    
    return 0;
}
