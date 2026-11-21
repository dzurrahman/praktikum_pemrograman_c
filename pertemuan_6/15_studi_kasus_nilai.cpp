/*
 * Contoh 15 - Studi Kasus Komprehensif: Rekap Nilai Berbasis Fungsi
 * Program yang sama dengan studi kasus Modul 05, tetapi dipecah menjadi fungsi
 * kecil dengan tanggung jawab tunggal. Perhatikan bagaimana main() kini hanya
 * mengatur alur, bukan memuat seluruh detail perhitungan dan tampilan.
 */
#include <iostream>
#include <iomanip>
#include <string>

char hurufMutu(int nilai) {
    if (nilai >= 85) return 'A';
    if (nilai >= 75) return 'B';
    if (nilai >= 65) return 'C';
    if (nilai >= 50) return 'D';
    return 'E';
}

std::string predikat(char huruf) {
    switch (huruf) {
        case 'A': return "Sangat Baik";
        case 'B': return "Baik";
        case 'C': return "Cukup";
        case 'D': return "Kurang";
        default : return "Sangat Kurang";
    }
}

bool lulus(int nilai) {
    return nilai >= 60;
}

bool nilaiValid(int nilai) {
    return nilai >= 0 && nilai <= 100;
}

double rataRata(int total, int banyak) {
    return static_cast<double>(total) / banyak;
}

void cetakGaris(int panjang, char karakter = '-') {
    for (int i = 0; i < panjang; ++i) {
        std::cout << karakter;
    }
    std::cout << '\n';
}

void cetakHistogram(char label, int jumlah) {
    std::cout << label << " : ";
    for (int i = 0; i < jumlah; ++i) {
        std::cout << '*';
    }
    std::cout << " (" << jumlah << ")\n";
}

int main() {
    int n;
    std::cout << "Jumlah mahasiswa: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Jumlah mahasiswa harus positif.\n";
        return 1;
    }

    int total = 0;
    int maks = -1;
    int min = 101;
    int lulusCount = 0;
    int cA = 0, cB = 0, cC = 0, cD = 0, cE = 0;

    for (int i = 1; i <= n; ++i) {
        int nilai;
        std::cout << "Nilai mahasiswa " << i << ": ";
        std::cin >> nilai;

        if (!nilaiValid(nilai)) {
            std::cout << "  (diabaikan: nilai harus 0-100)\n";
            --i;                        // ulangi mahasiswa yang sama
            continue;
        }

        total += nilai;
        if (nilai > maks) maks = nilai;
        if (nilai < min)  min  = nilai;
        if (lulus(nilai)) ++lulusCount;

        switch (hurufMutu(nilai)) {
            case 'A': ++cA; break;
            case 'B': ++cB; break;
            case 'C': ++cC; break;
            case 'D': ++cD; break;
            default : ++cE; break;
        }
    }

    cetakGaris(34, '=');
    std::cout << "REKAP NILAI PRAKTIKUM\n";
    cetakGaris(34, '=');

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Banyak data : " << n << '\n';
    std::cout << "Rata-rata   : " << rataRata(total, n) << '\n';
    std::cout << "Maksimum    : " << maks << '\n';
    std::cout << "Minimum     : " << min << '\n';
    std::cout << "Lulus       : " << lulusCount << " dari " << n << '\n';

    std::cout << '\n' << "Distribusi huruf mutu:\n";
    cetakHistogram('A', cA);
    cetakHistogram('B', cB);
    cetakHistogram('C', cC);
    cetakHistogram('D', cD);
    cetakHistogram('E', cE);

    std::cout << '\n' << "Keterangan predikat:\n";
    std::cout << "A = " << predikat('A') << '\n';
    std::cout << "B = " << predikat('B') << '\n';
    std::cout << "C = " << predikat('C') << '\n';
    std::cout << "D = " << predikat('D') << '\n';
    std::cout << "E = " << predikat('E') << '\n';

    return 0;
}
