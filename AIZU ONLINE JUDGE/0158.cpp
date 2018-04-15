#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		int num = 0;
		cin >> n;
		if (n == 0) break;
		while (n != 1) {
			if (n % 2 == 0) n = n / 2;
			else n = n * 3 + 1;
			num++;
		}
		cout << num << endl;
	}
	return 0;
}