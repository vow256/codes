#include <iostream>
using namespace std;

int main() {
	int t, n;
	for (int i = 0; i < 4; i++) {
		cin >> t >> n;
		switch (t) {
		case 1: cout << 6000 * n << endl; break;
		case 2: cout << 4000 * n << endl; break;
		case 3: cout << 3000 * n << endl; break;
		case 4: cout << 2000 * n << endl; break;
		}
	}
	return 0;
}