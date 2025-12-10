#include <iostream>
using namespace std;

int main() {
	int nilai;
	
	cin >> nilai;
	
	if ( nilai >= 85 && nilai <= 100) {
		cout << "lulus" << endl;
	}
	else if (nilai >= 0 && nilai < 85){
		cout << "tidak lulus" << endl;
	}
	else {
		cout << "diluar jangkauan" << endl;
	}
}
