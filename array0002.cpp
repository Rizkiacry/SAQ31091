#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    const int size = 5;
    int num[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> num[i];
    }

    int min1 = *min_element(num, num + size);
    int max2 = *max_element(num, num + size);

    cout << "min: " << min1 << endl;
    cout << "max: " << max2 << endl;

    return 0;
}
