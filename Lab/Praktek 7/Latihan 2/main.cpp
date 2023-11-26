#include <iostream>

using namespace std;

int main() {
    cout << "Latihan 2" << endl;
    cout << "a." << endl;
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--)
            cout << "  ";
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << " *";
        cout << endl;
    }
    cout << endl;
    cout << "b." << endl;
    int num = 1;
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--)
            cout << "  ";
        for(int j = 1; j <= 2 * i - 1 ; j++)
            cout << " " << num;
        num += 2;
        cout << endl;
    }
    cout << endl;
}