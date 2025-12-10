#include <iostream>
using namespace std;

int main() {
	int gaji, kreditSkor, lamaKerja;
	
	cin >> gaji;
	cin >> kreditSkor;
	cin >> lamaKerja;
	
	if (gaji >= 100) {
		cout << "gaji baik" << endl;
		if (kreditSkor >= 100) {
			cout << "kredit skor baik" << endl;
			if (lamaKerja >= 100) {
				cout << "lama kerja baik";
				cout << "\nPINJAMAN DISETUJUI" << endl;
			}
			else {
				cout << "lama kerja buruk" << endl;
				cout << "\nPINJAMAN TIDAK SETUJUI" << endl;
			}
		}
		else {
			cout << "kredit skor buruk" << endl;
			cout << "\nPINJAMAN TIDAK DISETUJUI" << endl;
		}
	}
	else {
		cout << "gaji buruk" << endl;
		cout << "\nPINJAMAN TIDAK DISETUJUI" << endl;
	}
}
