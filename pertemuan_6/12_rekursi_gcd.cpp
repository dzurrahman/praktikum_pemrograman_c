/*
 * Contoh 12 - Rekursi: FPB (GCD) dengan Algoritma Euklides
 * fpb(a, b) = fpb(b, a % b) selama b != 0.
 * Base case: b == 0 -> jawabannya a.
 * Bandingkan versi rekursif dengan versi iteratif yang setara.
 */
#include <iostream>

int fpbRekursif(int a, int b) {
    if (b == 0) {
        return a;                       // base case
    }
    return fpbRekursif(b, a % b);       // recursive case
}

int fpbIteratif(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

long long kpk(int a, int b) {
    // Gunakan pembagian lebih dahulu untuk menghindari overflow.
    return static_cast<long long>(a) / fpbRekursif(a, b) * b;
}

int main() {
    int a, b;
    std::cout << "Masukkan dua bilangan positif: ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Kedua bilangan harus positif.\n";
        return 1;
    }

    std::cout << "FPB rekursif(" << a << ", " << b << ") = "
              << fpbRekursif(a, b) << '\n';
    std::cout << "FPB iteratif(" << a << ", " << b << ") = "
              << fpbIteratif(a, b) << '\n';
    std::cout << "KPK(" << a << ", " << b << ") = " << kpk(a, b) << '\n';

    return 0;
}
