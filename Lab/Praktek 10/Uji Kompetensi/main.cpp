#include <iostream>
using namespace std;

int needline = 0;

void line();
string ReturnType(int i);
void InputData(int day, int Bekery[][3]);
int FindMax(int day, int Bakery[][3]);
int FindMin(int day, int Bakery[][3]);
int FindAvg(int day, int Bakery[][3]);
void ShowSalesOfProduct(int day, int Bakery[][3]);


int main() {
    int day;
    cout << "Input Amount of Day(s) : ";
    cin >> day;
    needline = day * (day <= 1 ? 23 : 12);
    int Bakery[day][3];
    line();
    cout << "Input Sales of Products (Units)" << endl;
    line();
    InputData(day, Bakery);
    ShowSalesOfProduct(day, Bakery);
}

void line() {
    int c = 0;
    while(c < needline)
    {
        cout << "-";
        c++;
    }
    cout << "\n";
}

string ReturnType(int i) {
    switch(i) {
        case 0 : return "Snacks";
        case 1 : return "Bakery";
        case 2 : return "Drinks";
        default : return "Unknown";
    }
}

void InputData(int day, int Bakery[][3])
{
    for(int i = 0; i < 3; i++)
    {
        cout << ReturnType(i) << endl;
        line();
        for(int j = 0; j < day; j++)
        {
            cout << "Sales Day " << j + 1 << " : ";
            cin >> Bakery[j][i];
        }
        cout << endl;
        line();
    }
}

int FindMax(int day, int Bakery[][3])
{
    int highest = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < day; j++)
        {
            if(highest < Bakery[j][i])
                highest = Bakery[j][i];
        }
    }
    return highest;
}

int FindMin(int day, int Bakery[][3])
{
    int lowest = FindMax(day, Bakery);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < day; j++)
        {
            if(lowest > Bakery[j][i])
                lowest = Bakery[j][i];
        }
    }
    return lowest;
}

int FindAvg(int day, int Bakery[][3])
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < day; j++)
        {
            sum += Bakery[j][i];
        }
    }
    return sum / (day * 3);
}

void ShowSalesOfProduct(int day, int Bakery[][3])
{
    cout << "Sales for Products" << endl;
    line();
    cout << "Products\t";
    for(int i = 0; i < day; i++)
    {
        cout << "Day " << i + 1 << "\t" << (i + 1 == day ? "\n" : "");
    }
    line();
    for(int i = 0; i < 3; i++)
    {
        cout << ReturnType(i) << "\t\t";
        for(int j = 0; j < day; j++)
        {
            cout << Bakery[j][i] << "\t" << (j + 1 == day ? "\n" : "");
        }
    }
    line();
    cout << "Max Sales : " << FindMax(day, Bakery) << " Units" << endl;
    cout << "Min Sales : " << FindMin(day, Bakery) << " Units" << endl;
    cout << "Average Sales : " << FindAvg(day, Bakery) << " Units" << endl;
}