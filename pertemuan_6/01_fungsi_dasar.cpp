/*
 * Contoh 01 - Fungsi Dasar
 * Fungsi adalah blok kode bernama yang dapat dipanggil berulang kali.
 * Bentuk umum:
 *   tipe-kembalian nama_fungsi(parameter) {
 *       badan fungsi;
 *       return nilai;
 *   }
 */
#include <iostream>
#include <string>

// Fungsi mengembalikan nilai bertipe int.
int luasPersegi(int sisi) {
    return sisi * sisi;
}

// Fungsi tanpa nilai kembalian (void) yang menghasilkan efek samping.
void sapa(std::string nama) {
    std::cout << "Halo, " << nama << "! Selamat belajar fungsi.\n";
}

int main() {
    // Pemanggilan fungsi: cukup tulis namanya lalu beri argumen.
    sapa("Budi");
    sapa("Siti");

    int sisi = 5;
    int luas = luasPersegi(sisi);   // sisi = argumen, nilai disalin ke parameter
    std::cout << "Luas persegi bersisi " << sisi << " = " << luas << '\n';

    // Fungsi yang sama dipakai berulang dengan argumen berbeda.
    std::cout << "Luas persegi bersisi 1..3: ";
    for (int i = 1; i <= 3; ++i) {
        std::cout << luasPersegi(i) << ' ';
    }
    std::cout << '\n';

    return 0;
}
