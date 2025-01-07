#include <iostream>
#include <fstream>
#include <iomanip> // Untuk std::setprecision

// Fungsi untuk mengonversi suhu
void konversiSuhu(double celsius, double &fahrenheit, double &reamur) {
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    reamur = (4.0 / 9.0) * celsius;
}

int main() {
    std::ofstream file("suhu.dat"); // Membuka file untuk menulis
    if (!file) {
        std::cerr << "Tidak dapat membuka file!" << std::endl;
        return 1;
    }

    // Menulis header
    file << "C F R\n";

    // Melakukan konversi dari 0 hingga 100 derajat Celsius
    for (double c = 0; c <= 100; c += 5) {
        double fahrenheit, reamur;
        konversiSuhu(c, fahrenheit, reamur);
        // Menyimpan hasil dengan format yang diinginkan
        file << std::fixed << std::setprecision(2) << c << " "
             << fahrenheit << " " << reamur << "\n";
    }

    file.close(); // Menutup file
    std::cout << "Konversi suhu telah disimpan dalam file suhu.dat" << std::endl;

    return 0;
}
