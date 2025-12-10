#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	int nilai;
	char kehadiran;
	cin >> nilai;
	cin >> kehadiran;
	
	if (nilai >= 60) {
		cout << "nilai bagus" << endl;
		
		if (kehadiran == 'y' || kehadiran == 'Y') {
			cout << "kehadiran bagus" << endl;
		}
		else {
			cout << "kehadiran jelek" << endl;
		}
	}
	else {
		cout << "tidak lulus" << endl;
	}
	
}
