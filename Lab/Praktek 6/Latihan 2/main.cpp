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
    char huruf = 'F';
    while(huruf <= 'R')
    {
        cout << huruf << " ";
        huruf += 3;

    }
    cout << endl;

    cout << "c. ";
    cout << endl;
    char huruf2 = 'Y';
    while(huruf2 >= 'A')
    {
        cout << huruf2 << endl;
        huruf2 -= 5;
    }

    cout << endl;
    cout << "d. ";

    int start = 4, currentIteration = 0;
    char starthuruf = 'd';
    while(currentIteration < 5)
    {
        cout << start << " ";
        cout << starthuruf << " ";
        currentIteration++;
        start += currentIteration;
        starthuruf += currentIteration;
    }

    cout << endl;
    cout << "e. ";

    int startNumber = -17, looper = 0;
    while(startNumber <= 13)
    {
        cout << startNumber << " ";
        if(looper == 2)
        {
            startNumber += 12;
            looper++;
            continue;
        }
        startNumber += 6;
        looper++;
    }

    cout << endl;
    cout << "f. ";

    int NumberStart = 4, loopnya = 0;
    char HurufStart = 'K';

    while(HurufStart >= 'C')
    {
        cout << HurufStart << " ";
        cout << NumberStart << " ";
        loopnya++;
        NumberStart += loopnya;
        HurufStart -= 2;
    }
}