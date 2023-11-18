#include <iostream>
#include <chrono>
#include <windows.h>
#include <unistd.h>

using namespace std;


int main() {
    bool muleh = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) < 1699894800;
    while(muleh)
    {
        if(!muleh)
            cout << "WAYAH E MULEH";
        else
            sleep(10);
    }
}