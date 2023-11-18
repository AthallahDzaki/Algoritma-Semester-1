#include <iostream>

using namespace std;

int main()
{
    float celcius, fahrenheit, reamur, kelvin;
    cout << "======================================\n";
    cout << "\t\tKonversi Suhu\n";
    cout << "======================================\n\n";
    cout << "Masukkan Suhu Celcius \t: ";
    cin >> celcius;
    cout << "\n\n";
    fahrenheit = (celcius * 9.0/5.0) + 32.0;
    cout << celcius << " derajat C in Fahrenheit \t\t: " << fahrenheit << " derajat F\n";
    reamur = (fahrenheit - 32.0) * 4.0/9.0;
    cout << fahrenheit << " derajat F in Reamur \t\t\t: " << reamur << " derajat Re\n" ;
    kelvin = (reamur * 5.0/4.0) + 273.15;
    cout << reamur << " derajat Re in Kelvin \t\t: " << kelvin << " derajat K";
}