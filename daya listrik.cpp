#include <iostream>
using namespace std;

int main() {
	double alat1, alat2, alat3, alat4, alat5, total_watt;
	cin >> alat1;
	cin >> alat2;
	cin >> alat3;
	cin >> alat4;
	cin >> alat5;
	
	total_watt = alat1 + alat2 + alat3 + alat4 + alat5;
	
	double kwh = total_watt / 100;
	
	double biaya_harian = kwh * 1353;
	int biaya_bulanan = biaya_harian *30;
	cout << "\n HASIL PERHITUNGAN" << endl;
	cout << "total daya" << total_watt << "watt" << endl;
	cout << kwh << "wh" << endl;
	cout << biaya_harian << endl;
	cout << biaya_bulanan << endl;
	
	return 0;
}
