/*
 * Contoh 06 - Scope dan Lifetime Variabel
 * Scope  : wilayah kode tempat nama dapat diakses.
 * Lifetime: rentang waktu variabel menempati memori selama program berjalan.
 *
 * Variabel lokal hanya hidup selama fungsi/ blok berjalan.
 * Variabel global hidup sepanjang program, tetapi penggunaannya harus dibatasi.
 */
#include <iostream>

int penghitungGlobal = 0;   // variabel global: dapat diakses semua fungsi

void tambahGlobal() {
    ++penghitungGlobal;
}

void demoBayangan(int x) {
    std::cout << "  parameter x (fungsi) = " << x << '\n';
    {
        int x = 50;         // variabel blok menutupi (shadowing) parameter
        std::cout << "  x di blok dalam      = " << x << '\n';
    }
    std::cout << "  parameter x setelah blok = " << x << '\n';
}

int main() {
    int x = 10;             // lokal main
    std::cout << "x di main = " << x << '\n';

    {
        int x = 20;         // lokal blok; menutupi x milik main
        std::cout << "x di blok = " << x << '\n';
    }
    std::cout << "x di main setelah blok = " << x << '\n';

    demoBayangan(7);

    tambahGlobal();
    tambahGlobal();
    tambahGlobal();
    std::cout << "penghitungGlobal = " << penghitungGlobal << '\n';

    return 0;
}
