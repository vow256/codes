#include <iostream>
using namespace std;

int main() {
	int d, l; cin >> d >> l;
	cout << (d - (d % l)) / l + d % l << endl;
	return 0;
}