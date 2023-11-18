#include <iostream>
#include <string>

int main()
{
    std::cout << "============================" << std::endl;
    std::cout << "Hello Boy!" << std::endl;
    std::cout << "Please Insert Your Name: " << std::endl;
    std::string name;
    getline(std::cin, name);
    std::cout << "============================" << std::endl;
    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Please Insert Your NIM: " << std::endl;
    int nim;
    std::cin >> nim;
    std::cin.ignore(1);
    std::cout << "============================" << std::endl;
    std::cout << "Your NIM is " << nim << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Please Insert Your Matkul: " << std::endl;
    std::string matkul;
    getline(std::cin, matkul);
    std::cout << "============================" << std::endl;
    std::cout << "Your Matkul is " << matkul << std::endl;
    std::cout << "============================" << std::endl;
    char kelas;
    std::cout << "Please Insert Your Class: " << std::endl;
    std::cin >> kelas;
    std::cout << "============================" << std::endl;
    std::cout << "Your Class is " << kelas << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "\tUser Data"<< std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "NIM : " << nim << std::endl;
    std::cout << "Matkul : " << matkul << std::endl;
    std::cout << "Class : " << kelas << std::endl;
    std::cout << "============================" << std::endl;
    return 0;
}