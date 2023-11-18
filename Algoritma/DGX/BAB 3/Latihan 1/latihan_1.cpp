#include <iostream>
#include <string>

using namespace std;

// global variables
const string username = "huda";
const string password = "2318029";

int main() {
    string usernameku, passwordku;

    cout << "=== LATIHAN 1 LOGIN FORM ===" << endl;
    cout << "Username: ";
    cin >> usernameku;
    cout << "Password: ";
    cin >> passwordku;

    if (usernameku == username && passwordku == password) {
        cout << "Login berhasil!" << endl;
    } else {
        cout << "Password atau nama tidak benar." << endl;
    }

    return 0;
}
