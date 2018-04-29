#include <iostream>
using namespace std;

int main() {
	int x; cin >> x; x %= 7;
	switch (x) {
	case 1: cout << "fri" << endl; break;
	case 2: cout << "sat" << endl; break;
	case 3: cout << "sun" << endl; break;
	case 4: cout << "mon" << endl; break;
	case 5: cout << "tue" << endl; break;
	case 6: cout << "wed" << endl; break;
	case 0: cout << "thu" << endl; break;
	}
	return 0;
}