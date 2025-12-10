#include <iostream>

int main () {

 string n[5];
 string nim[5];
 int nil[5];

 for ( i = 0; i < 5; i++) {
  std::cout << "Mahasiswa ke-" << i + 1 << endl; 
  std::cout << "Masukkan Nama"; cin >> n[i];
  std::cout << "Masukkan NIM"; cin >> nim[i];
  std::cout << "Masukkan Nilai"; cin >> nil[i]
 }

 for ( i = 0; i < 5; i++) {
  std::cout << "Mahasiswa ke- \n" << i + 1; 
  std::cout << "Nama:\n" << n[i]; 
  std::cout << "NIM:\n" << nim[i]; 
  std::cout << "Nilai\n" << nil[i]; 

  if (nil[i] <= 100 && nil[i] >= 90) {
   g = 'A' 
  } else if (nil[i] < 90 && nil[i] >= 80) {
    g = 'B'
  } else if (nil[i] < 90 && nil[i] >= 80) {
    g = 'C'
  } else if (nil[i] < 90 && nil[i] >= 80) {
    g = 'D'
  } else if (nil[i] < 90 && nil[i] >= 80) {
    g = 'E'
  } else {
    cout << "Nilai overflow. \n";
    cout << "Grade: " << g << "\n";
  }
  cout << "====================\n"
 }
  return 0;
}
