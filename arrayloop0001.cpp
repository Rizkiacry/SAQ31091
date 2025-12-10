#include <iostream>
#include <string>

int main () {
    using namespace std;
    const int num_students = 5;
    string n[num_students];
    string nim[num_students];
    int nil[num_students];

    for (int i = 0; i < num_students; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan Nama: ";
        cin >> n[i];
        cout << "Masukkan NIM: ";
        cin >> nim[i];
        cout << "Masukkan Nilai: ";
        cin >> nil[i];
    }

    for (int i = 0; i < num_students; i++) {
        cout << "====================" << endl;
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << n[i] << endl;
        cout << "NIM: " << nim[i] << endl;
        cout << "Nilai: " << nil[i] << endl;

        char g;
        if (nil[i] <= 100 && nil[i] >= 90) {
            g = 'A';
        } else if (nil[i] < 90 && nil[i] >= 80) {
            g = 'B';
        } else if (nil[i] < 80 && nil[i] >= 70) {
            g = 'C';
        } else if (nil[i] < 70 && nil[i] >= 60) {
            g = 'D';
        } else if (nil[i] < 60 && nil[i] >= 0) {
            g = 'E';
        } else {
            cout << "Nilai invalid." << endl;
            g = 'X'; // Invalid grade
        }

        if (g != 'X') {
            cout << "Grade: " << g << endl;
        }
    }
    cout << "====================" << endl;
    return 0;
}
