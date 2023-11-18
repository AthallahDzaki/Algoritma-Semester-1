#include <iostream>
using namespace std;

int main()
{
    cout << "a. ";
    for(int i = -5; i >= -40; i -= 7)
    {
        cout << i << " ";
    }
    cout << "\n\nb. ";
    for(int i = 1; i <= 81; i *= -3)
    {
        cout << i << " ";
    }
    cout << "\n\nc. ";
    for(int i = 0, a = 6; i <= 5; i++)
    {
        cout << a << " ";
        a += i + 1;
    }
    cout << "\n\nd. ";
    for(int i = 1; i < 10; i++)
    {
        if(i == 1 || i == 9)
            cout << i << " ";
        else if(i %  2 == 0)
            cout << i << " ";
    }
}