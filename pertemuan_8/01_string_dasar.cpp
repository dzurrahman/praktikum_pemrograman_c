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

    return 0;
}