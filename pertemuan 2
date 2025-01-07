#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    double nilaiAkhir;
};

bool compareNilai(const Mahasiswa &a, const Mahasiswa &b) {
    return a.nilaiAkhir > b.nilaiAkhir; // Mengurutkan berdasarkan nilai akhir menurun
}

void simpanDataKeFile(const vector<Mahasiswa>& data) {
    ofstream file("data_mahasiswa.txt");
    if (file.is_open()) {
        for (const auto& mhs : data) {
            file << mhs.nim << "," << mhs.nama << "," << mhs.nilaiAkhir << endl;
        }
        cout << "Data berhasil disimpan ke file." << endl;
        file.close();
    } else {
        cout << "Gagal membuka file untuk menulis!" << endl;
    }
}

void bacaDataDariFile(vector<Mahasiswa>& data) {
    ifstream file("data_mahasiswa.txt");
    if (file.is_open()) {
        string nim, nama, nilai;
        while (getline(file, nim, ',') && getline(file, nama, ',') && getline(file, nilai)) {
            Mahasiswa mhs;
            mhs.nim = nim;
            mhs.nama = nama;
            mhs.nilaiAkhir = stod(nilai); // Convert nilai string ke double
            data.push_back(mhs);
        }
        cout << "Data berhasil dibaca dari file." << endl;
        file.close();
    } else {
        cout << "Gagal membuka file untuk membaca!" << endl;
    }
}

int main() {
    vector<Mahasiswa> mahasiswa;
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        Mahasiswa mhs;
        cout << "Masukkan NIM: ";
        cin >> mhs.nim;
        cin.ignore();  // Membersihkan buffer
        cout << "Masukkan Nama: ";
        getline(cin, mhs.nama);
        cout << "Masukkan Nilai Akhir: ";
        cin >> mhs.nilaiAkhir;
        mahasiswa.push_back(mhs);
    }

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Data Mahasiswa berdasarkan NIM\n";
        cout << "2. Urutkan Data Mahasiswa berdasarkan Nilai Akhir\n";
        cout << "3. Simpan Data ke File\n";
        cout << "4. Baca Data dari File\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi (1-5): ";
        cin >> pilihan;

        if (pilihan == 1) {
            string cariNIM;
            cout << "Masukkan NIM yang ingin dicari: ";
            cin >> cariNIM;
            bool ditemukan = false;
            for (const auto& mhs : mahasiswa) {
                if (mhs.nim == cariNIM) {
                    cout << "Data Ditemukan:\n";
                    cout << "NIM: " << mhs.nim << "\nNama: " << mhs.nama << "\nNilai Akhir: " << mhs.nilaiAkhir << endl;
                    ditemukan = true;
                    break;
                }
            }
            if (!ditemukan) {
                cout << "Data mahasiswa dengan NIM " << cariNIM << " tidak ditemukan.\n";
            }
        } else if (pilihan == 2) {
            // Urutkan data berdasarkan nilai akhir menurun
            sort(mahasiswa.begin(), mahasiswa.end(), compareNilai);
            cout << "Data berhasil diurutkan berdasarkan nilai akhir.\n";
        } else if (pilihan == 3) {
            // Simpan data ke file
            simpanDataKeFile(mahasiswa);
        } else if (pilihan == 4) {
            // Baca data dari file
            mahasiswa.clear();  // Kosongkan data yang ada sebelum membaca ulang
            bacaDataDariFile(mahasiswa);
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program ini.\n";
        } else {
            cout << "Pilihan tidak valid. Silakan pilih opsi yang benar!\n";
        }

    } while (pilihan != 5); // Mengulang menu hingga pengguna memilih keluar

    return 0;
}
