/*
 * Contoh 03 - Parameter dan Nilai Kembalian
 * Fungsi dapat menerima beberapa parameter dan mengembalikan tepat satu nilai.
 * Tipe parameter menentukan nilai yang boleh dikirim (dengan konversi bila perlu).
 */
#include <iostream>

int tambah(int a, int b);
double bagi(double a, double b);
bool isGenap(int n);
int sisaBagi(int a, int b);

int main() {
    int x = 17, y = 5;
    std::cout << x << " + " << y << " = " << tambah(x, y) << '\n';
    std::cout << x << " - " << y << " = " << tambah(x, -y) << '\n';

    std::cout << x << " / " << y << " = " << bagi(x, y) << '\n';
    std::cout << x << " % " << y << " = " << sisaBagi(x, y) << '\n';

    for (int i = 1; i <= 6; ++i) {
        std::cout << i << (isGenap(i) ? " genap" : " ganjil") << '\n';
    }

    return 0;
}

int tambah(int a, int b) {
    return a + b;
}

double bagi(double a, double b) {
    // Kontrak fungsi: pemanggil wajib menjamin b != 0.
    return a / b;
}

bool isGenap(int n) {
    return n % 2 == 0;
}

int sisaBagi(int a, int b) {
    return a % b;
}
