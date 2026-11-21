/*
 * Contoh 14 - Fungsi untuk Validasi Masukan
 * Validasi yang baik dipisahkan menjadi fungsi kecil yang dapat dipakai ulang.
 * bacaNilai() menggabungkan validasi rentang dan penanganan masukan bukan angka
 * dalam satu "kontrak": fungsi selalu mengembalikan nilai yang sah.
 */
#include <iostream>
#include <limits>

bool dalamRentang(int nilai, int minimum, int maksimum) {
    return nilai >= minimum && nilai <= maksimum;
}

int bacaNilai(std::string label, int minimum, int maksimum) {
    int nilai;

    while (true) {
        std::cout << label << " (" << minimum << "-" << maksimum << "): ";
        std::cin >> nilai;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Masukan bukan angka. Coba lagi.\n";
            continue;
        }

        if (dalamRentang(nilai, minimum, maksimum)) {
            return nilai;           // kontrak terpenuhi
        }

        std::cout << "Nilai di luar rentang. Coba lagi.\n";
    }
}

double rataRata(int total, int banyak) {
    if (banyak == 0) {
        return 0.0;
    }
    return static_cast<double>(total) / banyak;
}

int main() {
    int n = bacaNilai("Banyak nilai", 1, 100);
    int total = 0;

    for (int i = 1; i <= n; ++i) {
        int nilai = bacaNilai("Nilai ke-" + std::to_string(i), 0, 100);
        total += nilai;
    }

    std::cout << "Total     : " << total << '\n';
    std::cout << "Rata-rata : " << rataRata(total, n) << '\n';

    return 0;
}
