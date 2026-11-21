/*
 * Contoh 10 - Rekursi: Faktorial
 * Rekursi adalah fungsi yang memanggil dirinya sendiri.
 * Setiap rekursi WAJIB memiliki:
 *   1. Base case  : kondisi berhenti (tidak memanggil diri lagi).
 *   2. Recursive case: langkah yang mendekati base case.
 * Tanpa base case yang tercapai -> rekursi tak berujung -> stack overflow.
 */
#include <iostream>

long long faktorialRekursif(int n) {
    if (n <= 1) {
        return 1;                       // base case: 0! = 1! = 1
    }
    return n * faktorialRekursif(n - 1); // recursive case
}

long long faktorialIteratif(int n) {
    long long hasil = 1;
    for (int i = 2; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int n;
    std::cout << "Masukkan n (0..20): ";
    std::cin >> n;

    if (n < 0 || n > 20) {
        std::cout << "n harus 0 sampai 20 agar tidak overflow.\n";
        return 1;
    }

    std::cout << n << "! (rekursif) = " << faktorialRekursif(n) << '\n';
    std::cout << n << "! (iteratif) = " << faktorialIteratif(n) << '\n';

    return 0;
}
