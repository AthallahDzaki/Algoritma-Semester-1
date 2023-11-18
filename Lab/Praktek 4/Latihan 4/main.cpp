#include <iostream>
using namespace std;

int main()
{
    cout << "--- TIKET BIOSKOP ANONIM MALANG ---\n";
    cout << endl;
    cout << "1. Film Uncharted" << endl;
    cout << "2. Film The Morbius" << endl;
    cout << "3. Film Fantastic Beast: The Secrets of Dumbledore" << endl;
    cout << "4. Film Black Adam" << endl;

    int pilihan, tmp_tiket, jumlah_tiket, total_harga;
    cout << "Masukan Pilihan Film Anda : ";
    cin >> pilihan;
    switch(pilihan)
    {
        case 1: {
            cout << "Film Uncharted di Teater 1" << endl;
            cout << "Harga Tiket : Rp. 40.000" << endl;
            tmp_tiket = 40000;
            break;
        }
        case 2: {
            cout << "Film The Morbius di Teater 2" << endl;
            cout << "Harga Tiket : Rp. 35.000" << endl;
            tmp_tiket = 35000;
            break;
        }
        case 3: {
            cout << "Film Fantastic Beast: The Secrets of Dumbledore di Teater 3" << endl;
            cout << "Harga Tiket : Rp. 30.000" << endl;
            tmp_tiket = 30000;
            break;
        }
        case 4: {
            cout << "Film Black Adam di Teater 4" << endl;
            cout << "Harga Tiket : Rp. 50.000" << endl;
            tmp_tiket = 50000;
            break;
        }
        default :
        {
            cout << "Pilihan tidak tersedia" << endl;
            return 0;
        }
    }

    cout << "Masukan Jumlah Tiket : ";
    cin >> jumlah_tiket;

    total_harga = tmp_tiket * jumlah_tiket;
    if(total_harga > 40000) 
    {
        cout << "Anda Mendapatkan Diskon 8 %" << endl;
        total_harga = total_harga - (total_harga * 0.08);
    }

    cout << "Total Pembayaran : Rp. " << total_harga << endl;    

    cout << "Masukkan Pembayaran Anda : ";
    int pembayaran;
    cin >> pembayaran;

    if(pembayaran < total_harga)
    {
        cout << "Pembayaran Anda Kurang" << endl;
    }
    else
    {
        cout << "Kembalian Anda : Rp. " << pembayaran - total_harga << endl;
    }
}