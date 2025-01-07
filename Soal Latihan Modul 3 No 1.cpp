#include <iostream>
using namespace std;

int main() {
    int m = 24, k = 21, j;

    // a. j = m | k
    j = m | k;
    cout << "a. j = m | k : " << j << endl;

    // b. j = m % k
    j = m % k;
    cout << "b. j = m % k : " << j << endl;

    // c. j = m & k
    j = m & k;
    cout << "c. j = m & k : " << j << endl;

    // d. j = m + ++k
    j = m + ++k;
    cout << "d. j = m + ++k : " << j << endl;

    // e. j = m - --k
    j = m - --k;
    cout << "e. j = m - --k : " << j << endl;

    // f. j = m - --k
    j = m - --k;
    cout << "f. j = m - --k : " << j << endl;

    // g. j = m >> 2
    j = m >> 2;
    cout << "g. j = m >> 2 : " << j << endl;

    // h. j = k += m
    j = k += m;
    cout << "h. j = k += m : " << j << endl;

    // i. j = --m + k++
    j = --m + k++;
    cout << "i. j = --m + k++ : " << j << endl;

    // j. j = --m * 5
    j = --m * 5;
    cout << "j. j = --m * 5 : " << j << endl;

    return 0;
}
    
