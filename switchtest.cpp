#include <iostream>
using namespace std;

int main() {
	int var;
	while (true){
	
	cin >> var;
	
	switch(var) {
		case 1 : cout << "var " << 1 << endl; break;
		case 2 : cout << "var " << 2 << endl; break;
		default : cout << "invalid" << endl; break;
	}
	
}
}
