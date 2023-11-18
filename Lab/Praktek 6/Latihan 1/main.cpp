#include <iostream>

using namespace std;

int main() {
    int i = 0, n, first = 0, second = 1, next;

    cout << "Masukkan Perulangan: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    while (i < n){
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        i++;
        cout << next << " ";
    };

    return 0;
}
