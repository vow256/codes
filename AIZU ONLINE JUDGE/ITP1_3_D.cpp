#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int num = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) num++;
	}
	cout << num << endl;
	return 0;
}