#include <iostream>
#include <string>

int main(){
    std::string nama;
    unsigned int nim;
    char kelas;
    unsigned int semester;
    float ip_semester;

    std::cout << "\tBAB 1 Tugas No.2\n" << std::endl;
    std::cout << "Masukkan Nama Anda  \t\t: ";
    getline(std::cin, nama); 
    std::cout << "Masukkan NIM Anda   \t\t: ";
    std::cin >> nim;
    std::cout << "Masukkan Kelas Anda \t\t: ";
    std::cin.ignore(1);
    std::cin >> kelas;
    std::cout << "Masukkan Semester Anda \t\t: ";
    std::cin.ignore(1);
    std::cin >> semester;
    std::cout << "Masukkan Nilai IP Semester \t: ";
    std::cin.ignore(1);
    std::cin >> ip_semester;
    std::cout << "\n\tBerikut Data Anda\n\n";
    std::cout << "Nama\t\t\t: " << nama << std::endl;
    std::cout << "NIM\t\t\t: " << nim << std::endl;
    std::cout << "Kelas\t\t\t: " << kelas << std::endl;
    std::cout << "Semester\t\t: " << semester << std::endl;
    std::cout << "Nilai IP Semester\t: " << ip_semester << std::endl;
    std::cout << "\n";
    std::cout << "Terima Kasih" << std::endl;
    return 0;
}