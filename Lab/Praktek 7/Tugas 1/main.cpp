#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        if(i == 1)
        {
            for(int j = 1; j <= 9; j++)
                cout << i << " ";
        }
        else
        {
            for(int j = 1; j <= i - 1; j++)
                cout << "  ";
            for(int j = 1; j <= 11 - 2 * i; j++)
                if(j == 1 || j == 11 - 2 * i)
                    cout << i << " ";
                else
                    cout << "  ";
        }
        cout << endl;
    }
}