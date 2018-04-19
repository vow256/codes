#include <iostream>
using namespace std;

int main() {
	int h, m, s, sum;
	cin >> sum;
	h = sum / 3600;
	m = (sum - (3600 * h)) / 60;
	s = sum % 60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}