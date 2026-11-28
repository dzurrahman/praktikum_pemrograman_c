
#include <iostream>
#include <limits>
#include <string>

int main() {
    
    std::string namaDepan;
    std::cout << "Nama depan: ";
    std::cin >> namaDepan;
    std::cout << "Terbaca oleh >>: [" << namaDepan << "]" << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string namaLengkap;
    std::cout << "Nama lengkap: ";
    std::getline(std::cin, namaLengkap);
    std::cout << "Terbaca oleh getline: [" << namaLengkap << "]" << std::endl;

    int umur;
    std::cout << "Umur: ";
    std::cin >> umur;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string alamat;
    std::cout << "Alamat: ";
    std::getline(std::cin, alamat);

    std::cout << "Umur : " << umur << std::endl;    
    std::cout << "Alamat : " << alamat << std::endl;

    return 0;
}

