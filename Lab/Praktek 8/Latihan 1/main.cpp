#include <iostream>

using namespace std;

float nim = 26.0 + 10.0;

float KalkulasiBola(float radius)
{
    float volume = 4.0 / 3.0f * 3.14 * radius * radius * radius;
    return volume;
}

float KalkulasiSetengahBola()
{
    return 0.5 * 4.0 / 3.0f * 3.14 * nim * nim * nim;
}

int main()
{
    float radius = nim;
    float volume = KalkulasiBola(radius);
    float volume2 = KalkulasiSetengahBola();
    cout << "Volume bola dengan radius " << radius << " adalah " << volume << "cm3" << endl;
    cout << "Volume setengah bola dengan radius " << radius << " adalah " << volume2 << "cm3" << endl;
}