#include <iostream>

using namespace std;

int main() {
    int row = 6;
    for(int i = 0; i < row; i++)
    {
        int val = 1;
        for(int j = 1; j < (row - i); j++)
        {
            cout << "  ";
            // cout << endl;
            // cout << "J : " << j << " Row - I : " << row - i << endl;
        }
        for(int k = 0; k <= i; k++)
        {
            cout << val << "   ";
            val = val * (i - k) / (k + 1);
            // cout<<endl;
            // cout << "I : " << i << " K : " << k << " Val : " << val << endl;
        }
        cout << endl << endl;
    }
    cout << endl;
}