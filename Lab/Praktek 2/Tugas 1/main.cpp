#include<iostream>
using namespace std;
int main ()
{
    const float phi = 3.14;
    float r, v;
    double v_setengah;

    cout << ".................................................................."<<endl;
    cout << "              Program Menghitung Volume Bola"<<endl;
    cout << "                      dan Setengah Bola"<< endl;
    cout << ".................................................................."<<endl;

    cout << "Masukan Jari Jari : "; 
    cin >> r;
    v = (4.0/3.0)*phi*r*r*r;
    cout << "Volume Bola adalah          : " << v << " cm^3" <<endl;
    v_setengah = 0.5 * v;
    cout << "Volume Setengah Bola Adalah : " << v_setengah << "cm^3";

    return 0;
}
