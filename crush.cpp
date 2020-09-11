#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	int oddCount = 0, minOdd = 101;
	int sum = 0;
 
	cin >> n;
	for (int i = 0, g; i < n; ++i) {
		cin >> g;
		sum += g;
		if (g % 2 == 1) {
			++oddCount;
			if (g < minOdd) {
				minOdd = g;
			}
		}
	}
	if (oddCount % 2 == 1) {
		cout << sum;
	}
	else {
		if (oddCount > 0) {
			cout << sum - minOdd;
		}
		else {
			cout << 0;
		}
	}
 
	return 0;
}
