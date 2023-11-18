#include <iostream>

using namespace std;

int main() {
    cout << "\t\tINI PROGRAM GUYS" << endl;
    cout << "====================================================" << endl;
    cout << "a. ";
    int i = 22;
    while(i >= -20)
    {
        cout << i << " ";
        if(i == 12)
        {
            i -= 12;
            continue;
        }
        i -= 5;
    }
    cout << endl;

    cout << "b. ";
    char siap = 'F';
    while(siap <= 'R')
    {
        cout << siap << " ";
        siap += 3;

    }
    cout << endl;

    cout << "c. ";
    cout << endl;
    char siap2 = 'Y';
    while(siap2 >= 'A')
    {
        cout << siap2 << endl;
        siap2 -= 5;
    }

    cout << endl;
    cout << "d. ";

    int gacor_kang = 4, apa = 0;
    char gacor_king = 'd';
    while(apa < 5)
    {
        cout << gacor_kang << " ";
        cout << gacor_king << " ";
        apa++;
        gacor_kang += apa;
        gacor_king += apa;
    }

    cout << endl;
    cout << "e. ";

    int mantap = -17, looper = 0;
    while(mantap <= 13)
    {
        cout << mantap << " ";
        if(looper == 2)
        {
            mantap += 12;
            looper++;
            continue;
        }
        mantap += 6;
        looper++;
    }

    cout << endl;
    cout << "f. ";

    int well = 4, loopnya = 0;
    char done = 'K';

    while(done >= 'C')
    {
        cout << done << " ";
        cout << well << " ";
        loopnya++;
        well += loopnya;
        done -= 2;
    }
}