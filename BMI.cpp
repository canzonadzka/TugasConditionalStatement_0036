#include <iostream>
using namespace std;

void inputData(double &berat, double &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

int main() {

    double berat;
    double tinggi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    inputData(berat, tinggi);

    return 0;
}