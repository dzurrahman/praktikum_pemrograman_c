#include <iostream>

double hitungLuas(double panjang, double lebar);
void cetakLuas(double luas);
int ubah(int x);
void tampilMenu();

long long faktorial(int n);

int main() {
    int hasil = faktorial(3);
    std::cout << "Faktorial dari 3 adalah: " << hasil << std::endl;
    return 0;
}

double hitungLuas(double panjang, double lebar) {
    double luas = panjang * lebar;
    return luas;
}

void cetakLuas(double luas) {
    std::cout << "Luas persegi panjang: " << luas << std::endl;
}

int ubah(int x) {
    x = 10; // Mengubah nilai x di dalam fungsi
    // std::cout << "Nilai x di dalam fungsi ubah: " << x << std::endl;
    return x;
}

void tampilMenu() {
    std::cout << "1. Mulai\n2. Keluar\n";
}

long long faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
