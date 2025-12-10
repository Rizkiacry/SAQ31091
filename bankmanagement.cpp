#include <iostream>
#include <string>

using namespace std;

struct bankmanagement {
	int accno;
	string name, address;
	char actype; //savings or current
	float amount;
	
	bool checkavailability(int a);
};

int main() {
	// Example usage
    bankmanagement my_account = {12345, "John Doe", "123 Main St", 'S', 1000.0f};
    if (my_account.checkavailability(12345)) {
        cout << "Account found!" << endl;
    } else {
        cout << "Account not found!" << endl;
    }
	return 0;
}

bool bankmanagement::checkavailability(int a) {
	if (accno == a) {
	    return true;
    } else {
        return false;
    }
}
