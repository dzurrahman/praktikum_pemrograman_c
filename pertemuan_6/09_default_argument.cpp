/*
 * Contoh 09 - Default Argument (C++)
 * Parameter terakhir boleh memiliki nilai bawaan. Bila argumen tidak diberikan,
 * compiler memakai nilai default tersebut.
 * Aturan: parameter berdefault harus berada di KANAN parameter tanpa default.
 */
#include <iostream>
#include <iomanip>

// Default argument ditulis pada deklarasi (prototipe), bukan pada definisi.
double hitungTotal(double harga, int jumlah, double diskon = 0.0);
void cetakLabel(std::string teks, int lebar = 24, char garis = '=');
double hitungPajak(double nilai, double tarif = 0.11);

int main() {
    std::cout << std::fixed << std::setprecision(2);

    // Memakai seluruh default.
    std::cout << "Total tanpa diskon : " << hitungTotal(50000, 2) << '\n';

    // Mengisi sebagian default (diskon 10%).
    std::cout << "Total diskon 10%   : " << hitungTotal(50000, 2, 0.10) << '\n';

    std::cout << "Pajak default 11%  : " << hitungPajak(100000) << '\n';
    std::cout << "Pajak 5%           : " << hitungPajak(100000, 0.05) << '\n';

    std::cout << '\n';
    cetakLabel("STRUK PEMBAYARAN");
    cetakLabel("TOTAL", 30, '-');

    return 0;
}

double hitungTotal(double harga, int jumlah, double diskon) {
    double subtotal = harga * jumlah;
    return subtotal - subtotal * diskon;
}

void cetakLabel(std::string teks, int lebar, char garis) {
    for (int i = 0; i < lebar; ++i) {
        std::cout << garis;
    }
    std::cout << '\n' << teks << '\n';
    for (int i = 0; i < lebar; ++i) {
        std::cout << garis;
    }
    std::cout << "\n\n";
}

double hitungPajak(double nilai, double tarif) {
    return nilai * tarif;
}
