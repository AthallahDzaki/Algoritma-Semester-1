#include <iostream>
using namespace std;

int main() {
    //Start Your Code From Below
    int banyakData;
    
    cout << "Masukkan Banyak Data : ";
    cin >> banyakData;

    int arrayStatis[banyakData] = {}, arrayDinamis[banyakData] = {};
    
    for(int i = 0; i < banyakData; i++)
    {
        cout << "Masukkan Data array ke-" << i + 1<< ": ";
        cin >> arrayStatis[i];
    }
    cout << "------------------------------------------------" << endl;
    cout << endl;
    cout << "Array Sebelum Ditambahkan" << endl << "[";
    
    for(int j = 0; j < banyakData; j++)
    {
        cout << arrayStatis[j] << (j + 1 != banyakData ? "," : "");
    }
    cout << "]" << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;
    for(int k = 0; k < banyakData; k++)
    {
        for(int l = 0; l <= k; l++)
        {
            arrayDinamis[k] += arrayStatis[l];
        }
    }
    cout << "Array Sesudah Ditambahkan" << endl << "[";
    
    for(int j = 0; j < banyakData; j++)
    {
        cout << arrayDinamis[j] << (j + 1 != banyakData ? "," : "");
    }
    cout << "]" << endl;
    cout << "------------------------------------------------" << endl;
    return 0;
}