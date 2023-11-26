#include <iostream>

using namespace std;

int main() {
    cout << "Latihan 1" << endl;
    cout << "a." << endl;
    char N = 'E';
    for(int i = 0; i <= 5; i++) {
        for(int j = 0; j < i; j++) {
            cout << char(N - j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "b." << endl;
    for(int i = 5; i > 0; i--)
    {
        for(int k = 0; k < 5 - i; k++)
        {
            cout << "  ";
        }
        for(int j = 0; j < i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    cout << endl;
    cout << "c." << endl;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "d." << endl;

    for(int i = 0, num = 1; i < 4; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}