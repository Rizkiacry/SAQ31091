#include <iostream>
using namespace std;

int main() {
	int age;
	char hasLicense;
	
	cin >> age;
	
	cin >> hasLicense;
	
	if (age >= 18 && hasLicense == 'y') {
		cout << "excellent" << endl;
	}
	else if (age < 18 || hasLicense == 'n' ){
		cout << "not fulfilled" << endl;
	}
	else {
		cout << "invalid" << endl;
	}
}


