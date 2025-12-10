#include <iostream>

using namespace std;

int main() {
	int i;
	for (i=10; i>5; i--)
	{
		int j=10;
		int k=10;
		
		while (j>5) {
			do {
				k--;
				cout << k << " ";
			} while (k>5);
			j--;		
		} 
	}
}
