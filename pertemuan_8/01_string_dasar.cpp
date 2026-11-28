#include <cstring>
#include <iostream>
#include <string>

int main() {

    char namaC[] = "Budi";
    std::string namaCpp = "Budi";

    std::cout << "Array char : " << namaC << std::endl;
    std::cout << "std::string : " << namaCpp << std::endl;
    std::cout << "strlen(namaC) : " << std::strlen(namaC) << std::endl;
    std::cout << "sizeof(namaC) : " << sizeof(namaC) << std::endl;
    std::cout << "namaCpp.size() : " << namaCpp.size() << std::endl;

    namaC[0] = 'D';
    namaCpp[0] = 'D';

    std::cout << "Setelah diubah: " << namaC << " | " << namaCpp << std::endl;

    std::string sapaan = "Halo, " + namaCpp + "!";
    std::cout << sapaan << std::endl;

    if(namaCpp == "Dudi") {
        std::cout << "Perbandingan std::string memakai ==" << std::endl;
    }

    return 0;
}