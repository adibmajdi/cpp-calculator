#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum;

    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Hasil dari " << num1 << " + " << num2 << " adalah: " << sum << endl;

    double selisih = num1 - num2;
    cout << "Hasil pengurangan: " << selisih << endl;
    
    return 0;
}
