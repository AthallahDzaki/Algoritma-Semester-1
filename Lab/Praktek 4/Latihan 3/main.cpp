#include <iostream>
using namespace std;

int main()
{
    int umur;
    string nama;
    cout << "Program Golongan Pramuka\n";
    cout << "=======================\n";
    cout << "Masukkan nama Anda : ";
    cin >> nama;
    cout << "Masukkan umur Anda : ";
    cin >> umur;

    switch(umur)
    {
        case 7 ... 10:
        {
            cout << nama << " kamu tergolong Pramuka Siaga";
            break;
        }
        case 11 ... 15:
        {
            cout << nama << " kamu tergolong Pramuka Penggalang";
            break;
        }
        case 16 ... 20:
        {
            cout << nama << " kamu tergolong Pramuka Penegak";
            break;
        }
        case 21 ... 25:
        {
            cout << nama << " kamu tergolong Pramuka Pandega";
            break;
        }
        default:
        {
            if(umur > 25)
            {
                cout << nama << " kamu tergolong Pramuka Pandega";
            }
            else
            {
                cout << "Umur Kamu Belum Tergolong Tingkatan di Pramuka";
            }
        }
    }
}