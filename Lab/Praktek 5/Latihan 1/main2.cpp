#include <iostream>
using namespace std;
int main()
{
    cout << "NIM Genap" << endl;
    cout << endl;
    cout << "a. ";
    for(int i = 0; i <= 21; i++)
    {
        if(i % 2 == 0)
            cout << i << " ";
    }
    cout << "\n\nb. ";
    for(int i = 21; i >= 0; i--)
    {
        if(i % 2 == 1)
            cout << i << " ";
    }
}