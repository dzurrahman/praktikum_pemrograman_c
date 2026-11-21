/*
 * Contoh 13 - Fungsi Mengembalikan bool: Uji Bilangan Prima
 * Fungsi kecil yang "bernilai benar/salah" membuat program utama sangat mudah
 * dibaca dan dapat dipakai ulang oleh fungsi lain.
 */
#include <iostream>

bool isPrima(int n) {
    if (n < 2) {
        return false;
    }
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            return false;           // satu pembagi cukup untuk menolak
        }
    }
    return true;
}

void cetakPrima(int batas) {
    std::cout << "Bilangan prima 2.." << batas << ": ";
    for (int i = 2; i <= batas; ++i) {
        if (isPrima(i)) {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
}

int hitungPrima(int batas) {
    int banyak = 0;
    for (int i = 2; i <= batas; ++i) {
        if (isPrima(i)) {
            ++banyak;
        }
    }
    return banyak;
}

int main() {
    int batas;
    std::cout << "Masukkan batas atas (>= 2): ";
    std::cin >> batas;

    if (batas < 2) {
        std::cout << "Batas harus >= 2.\n";
        return 1;
    }

    cetakPrima(batas);
    std::cout << "Banyak prima <= " << batas << ": " << hitungPrima(batas) << '\n';

    return 0;
}
