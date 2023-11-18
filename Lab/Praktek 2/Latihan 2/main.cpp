#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    cout << "Nilai x = " << x << endl;
    x += 3;
    cout << "Setelah x += 3, x = " << x << endl;
    cout << "Nilai x setelah ditambah 3 adalah " << x << endl;
    x *= 2;
    cout << "Setelah x *= 2, x = " << x << endl;
    cout << "Nilai x setelah dikali 2 adalah " << x << endl;
    x++;
    cout << "Setelah x++, x = " << x << endl;
    return 0;
}