#include <iostream>
using namespace std;

int main() {
	int max, min;
	for (int i = 0; i < 7; i++) {
		cin >> max >> min;
		cout << max - min << endl;
	}
	return 0;
}