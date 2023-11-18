#include <iostream>
#include <string>

using namespace std;

// global variables
string username = "Athallah";
string password = "2318026";

int main() {
    string input_username, input_password;

    cout << "=== LOGIN ===" << endl;
    cout << "Username: ";
    cin >> input_username;
    cout << "Password: ";
    cin >> input_password;

    if (input_username == username && input_password == password) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
