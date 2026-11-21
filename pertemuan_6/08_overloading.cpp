/*
 * Contoh 08 - Function Overloading (C++)
 * Beberapa fungsi boleh memiliki nama sama selama daftar parameternya
 * (jumlah dan/atau tipenya) berbeda. Compiler memilih versi yang paling cocok
 * berdasarkan argumen yang diberikan.
 */
#include <iostream>

int kali(int a, int b) {
    std::cout << "[dipanggil: kali(int, int)]\n";
    return a * b;
}

double kali(double a, double b) {
    std::cout << "[dipanggil: kali(double, double)]\n";
    return a * b;
}

int kali(int a, int b, int c) {
    std::cout << "[dipanggil: kali(int, int, int)]\n";
    return a * b * c;
}

void tampilkan(int nilai) {
    std::cout << "integer: " << nilai << '\n';
}

void tampilkan(double nilai) {
    std::cout << "double : " << nilai << '\n';
}

int main() {
    std::cout << "3 x 4        = " << kali(3, 4) << "\n\n";
    std::cout << "2.5 x 4.0    = " << kali(2.5, 4.0) << "\n\n";
    std::cout << "2 x 3 x 4    = " << kali(2, 3, 4) << "\n\n";

    tampilkan(7);
    tampilkan(7.5);

    // Perhatikan: literal 7 bertipe int, literal 7.5 bertipe double.
    // Overloading TIDAK boleh dibedakan hanya berdasarkan tipe kembalian.
    return 0;
}
