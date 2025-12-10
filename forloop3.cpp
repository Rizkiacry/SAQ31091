#include <iostream>
using namespace std;

int main() {
	int n = 5;
	
	for (int i = 1; i <= n; i++) { //0; n
		for (int j = 1; j <= i; j++) { //0; jn n-i
			cout << " " ;
		}
		for (int k = 1; k <= n-i; k++) { //0; ki
			cout << "*" ;
		}
	 	cout << "\n" ;
	}
}
