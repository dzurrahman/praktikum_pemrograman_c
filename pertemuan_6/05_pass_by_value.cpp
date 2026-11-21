/*
 * Contoh 05 - Parameter by Value
 * Secara default, argumen dikirim SEBAGAI SALINAN (by value).
 * Perubahan pada parameter di dalam fungsi TIDAK mengubah variabel pemanggil.
 * Untuk benar-benar menukar nilai pemanggil, gunakan referensi (C++) atau
 * pointer (C, dibahas pada Modul 10).
 */
#include <iostream>

void ubahNilai(int x) {
    x = 99;                 // hanya salinan lokal yang berubah
    std::cout << "  (di dalam fungsi, x = " << x << ")\n";
}

void tukarSalah(int a, int b) {
    int sementara = a;
    a = b;
    b = sementara;
}

// Referensi (&) membuat parameter menjadi alias dari variabel pemanggil.
void tukarBenar(int& a, int& b) {
    int sementara = a;
    a = b;
    b = sementara;
}

int main() {
    int nilai = 10;
    std::cout << "Sebelum ubahNilai : " << nilai << '\n';
    ubahNilai(nilai);
    std::cout << "Sesudah ubahNilai : " << nilai << " (tidak berubah)\n\n";

    int x = 1, y = 2;
    std::cout << "Sebelum tukarSalah: x=" << x << " y=" << y << '\n';
    tukarSalah(x, y);
    std::cout << "Sesudah tukarSalah: x=" << x << " y=" << y << " (tidak berubah)\n\n";

    std::cout << "Sebelum tukarBenar: x=" << x << " y=" << y << '\n';
    tukarBenar(x, y);
    std::cout << "Sesudah tukarBenar: x=" << x << " y=" << y << " (berubah)\n";

    return 0;
}
