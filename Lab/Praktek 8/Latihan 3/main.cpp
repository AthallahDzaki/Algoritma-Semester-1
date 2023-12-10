#include <iostream>

using namespace std;
float kalkulasiFungsi(int x) {
    cout << "Kalkulasi dari f(x) = 8x^2 - 3x + 5" << endl;
    return (8 * (x * x)) - (3 * x) + 5;
}

int main() {
    int x = 26;
    x = kalkulasiFungsi(x);
    cout << "X: " << x << endl;
    return 0;
}
