#include <iostream>
using namespace std;

int main()
{
    char j = 'E';
    for(int y = 13, z = 17; j>='A'; (j--, y*=2, z-=3))
    {
        cout << "Nilai X : " << j << endl;
        cout << "Nilai Y : " << y << endl;
        cout << "Nilai Z : " << z << endl;
        cout << "-------------------------" << endl;
    }
}