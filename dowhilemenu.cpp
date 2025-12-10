#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // Handle the valid input
        if (choice == '1') {
            cout << "Hello!\n";
        } 
        // Handle the invalid input
        else if (choice != '2') { // This catches everything that isn't 1 or 2
            cout << "Invalid input. Please try again.\n";
        }

    } while (choice != '2'); // The main loop continues as long as they don't pick 2

    cout << "Exiting program.\n";
    return 0;
}
