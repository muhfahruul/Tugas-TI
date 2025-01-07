#include <iostream>
#include <fstream>
#include <cmath> // Untuk pow

int main() {
    double M, B;
    
    // Input uang awal dan bunga
    std::cout << "Masukkan uang awal (M) dalam rupiah: ";
    std::cin >> M;
    std::cout << "Masukkan bunga per tahun (B) dalam persen: ";
    std::cin >> B;

    // Menghitung bunga dalam bentuk desimal
    B = B / 100;

    // Menghitung uang pada akhir tahun ke-5
    double U = M * pow(1 + B, 5);

    // Menyimpan hasil dalam file bank.dat
    std::ofstream file("bank.dat");
    if (!file) {
        std::cerr << "Tidak dapat membuka file!" << std::endl;
        return 1;
    }

    // Menulis hasil ke file
    file << "Uang awal (M): " << M << " Rupiah\n";
    file << "Bunga per tahun (B): " << (B * 100) << " %\n";
    file << "Uang pada akhir tahun ke-5: " << U << " Rupiah\n";

    file.close(); // Menutup file
    std::cout << "Hasil telah disimpan dalam file bank.dat" << std::endl;

    return 0;
}
