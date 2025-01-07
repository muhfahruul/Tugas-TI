#include <iostream>
#include <cmath> // Untuk fungsi sqrt

using namespace std;

int main() {
    int pilihan;
    float panjang, lebar;

    do {
        cout << "MENU EMPAT PERSEGI PANJANG" << endl;
        cout << "1. Hitung Luas" << endl;
        cout << "2. Hitung Keliling" << endl;
        cout << "3. Hitung Panjang Diagonal" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 3) {
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
        }

        switch (pilihan) {
            case 1: {
                float luas = panjang * lebar;
                cout << "Luas Persegi Panjang: " << luas << endl;
                break;
            }
            case 2: {
                float keliling = 2 * (panjang + lebar);
                cout << "Keliling Persegi Panjang: " << keliling << endl;
                break;
            }
            case 3: {
                float diagonal = sqrt(panjang * panjang + lebar * lebar);
                cout << "Panjang Diagonal Persegi Panjang: " << diagonal << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        cout << endl;

    } while (pilihan != 4);

    return 0;
}
