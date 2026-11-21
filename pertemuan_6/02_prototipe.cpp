/*
 * Contoh 02 - Prototipe Fungsi
 * Prototipe (deklarasi) memberi tahu compiler tentang nama, tipe kembalian,
 * dan tipe parameter SEBELUM fungsi benar-benar didefinisikan.
 * Dengan prototipe, definisi boleh diletakkan setelah main().
 */
#include <iostream>

const double PI = 3.14159265358979323846;

// Prototipe: diakhiri titik koma, badan fungsi belum ada.
double luasLingkaran(double r);
double kelilingLingkaran(double r);
double volumeBola(double r);

int main() {
    double r;
    std::cout << "Masukkan jari-jari: ";
    std::cin >> r;

    if (r < 0) {
        std::cout << "Jari-jari tidak boleh negatif.\n";
        return 1;
    }

    std::cout << "Luas lingkaran   : " << luasLingkaran(r) << '\n';
    std::cout << "Keliling lingkaran: " << kelilingLingkaran(r) << '\n';
    std::cout << "Volume bola      : " << volumeBola(r) << '\n';

    return 0;
}

// Definisi fungsi: tipe, nama, dan parameter harus cocok dengan prototipe.
double luasLingkaran(double r) {
    return PI * r * r;
}

double kelilingLingkaran(double r) {
    return 2.0 * PI * r;
}

double volumeBola(double r) {
    return (4.0 / 3.0) * PI * r * r * r;
}
