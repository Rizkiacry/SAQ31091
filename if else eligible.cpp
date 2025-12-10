#include <iostream>
using namespace std;

int main() {
	int usia;
	char wargaNegara;
	string notEligible = "not eligible";
	string eligible = "eligible";
	
	cin >> usia;
	cin >> wargaNegara;
	
	if (usia >= 17) {
		if (wargaNegara == 'y' || wargaNegara == 'Y') {
			cout << eligible << endl;
		}
		else {
			cout << notEligible << endl;
		}
	}
	else {
		cout << notEligible << endl;
	}

}
