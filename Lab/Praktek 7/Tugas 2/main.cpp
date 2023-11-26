#include <iostream>
using namespace std;

int main() {
    cout << "Genap.1" << endl;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 6 - i; j++)
            cout << j << " ";
        cout << endl;
    }
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    cout << endl;

    cout << "Genap.2" << endl;
    char ch = 'A';
    for(int i = 0; i < 5; i++) {
        for(int j = 1; j <= 5 - i; j++)
            cout << char(ch + i) << " ";
        cout << endl;
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 1; j <= i + 1; j++)
            cout << char(70 - j) << " ";
        cout << endl;
    }
}