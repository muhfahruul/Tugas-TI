#include <stdio.h>

int main() {
    // Deklarasi variabel
    float radius, area;
    const float PI = 3.14159;

    // Meminta input jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    // Menghitung luas lingkaran
    area = PI * radius * radius;

    // Menampilkan hasil
    printf("Luas lingkaran adalah: %.2f\n", area);

    return 0;
}
