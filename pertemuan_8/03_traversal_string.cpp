#include <iostream>
#include <string>

int main() {

    std::string teks = "ibu ratna antar ubi";

    std::cout << "Dengan index: " << std::endl;
    for (std::size_t i = 0; i < teks.size(); ++i) {
        std::cout << " [" << i << "] = " << teks[i] << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Dengan range-based for: " << std::endl;
    for (char c : teks) {
        std::cout << c;
    }

    std::cout << std::endl;

    std::cout << "Dibalik: " << std::endl;
    for (std::size_t i = teks.size(); i-- > 0;) {
        std::cout << teks[i];
    }

    std::cout << std::endl;


    return 0;
}