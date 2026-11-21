/*
 * Contoh 04 - Fungsi void dan Efek Samping
 * Fungsi void tidak mengembalikan nilai; tujuannya menghasilkan efek samping
 * (mencetak ke layar, mengubah state) atau merapikan tampilan program.
 */
#include <iostream>

void cetakGaris(int panjang, char karakter) {
    for (int i = 0; i < panjang; ++i) {
        std::cout << karakter;
    }
    std::cout << '\n';
}

void cetakJudul(std::string judul, int lebar) {
    cetakGaris(lebar, '=');
    std::cout << judul << '\n';
    cetakGaris(lebar, '=');
}

void tampilkanRataRata(int total, int banyak) {
    // return dini pada fungsi void: keluar tanpa nilai.
    if (banyak == 0) {
        std::cout << "Belum ada data untuk dihitung.\n";
        return;
    }

    double rata = static_cast<double>(total) / banyak;
    std::cout << "Rata-rata: " << rata << '\n';
}

void tampilMenu() {
    std::cout << "1. Mulai\n";
    std::cout << "2. Bantuan\n";
    std::cout << "3. Keluar\n";
}

int main() {
    cetakJudul("LAPORAN NILAI", 30);
    tampilkanRataRata(240, 3);
    tampilkanRataRata(0, 0);

    std::cout << '\n';
    tampilMenu();

    return 0;
}
