#include <iostream>
using namespace std;

int main() {
	int a,b;
	
	cin >> a;
	cin >> b;
	
	cout << "\n hasil perbandingan" << endl;
	cout << "==" << (a == b) << endl;
	cout << "!=" << (a != b) << endl;
	cout << ">" << (a > b) << endl;
	cout << "<" << (a < b) << endl;
	cout << ">=" << (a >= b) << endl;
	cout << "<=" << (a <= b) << endl;
	
	cout << "\n hasil logika" << endl;
	cout << "&&" << ((a <= b) && (a != b)) << endl;
	cout << "||" << ((a > b) || (a >= b)) << endl;
	cout << "!" << (!(a == b)) << endl;
	
	
}
