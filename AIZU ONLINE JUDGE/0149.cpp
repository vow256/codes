#include <iostream>
using namespace std;

int main() {
	double left, right;
	int Lleft[4] = {0, 0, 0, 0};
	int Lright[4] = {0, 0, 0, 0};
	while (cin >> left >> right) {
		if (left >= 1.1) Lleft[0]++;
		else if (left >= 0.6) Lleft[1]++;
		else if (left >= 0.2) Lleft[2]++;
		else if (left >= 0.0) Lleft[3]++;
		if (right >= 1.1) Lright[0]++;
		else if (right >= 0.6) Lright[1]++;
		else if (right >= 0.2) Lright[2]++;
		else if (right >= 0.0) Lright[3]++;
	}
	for (int i = 0; i < 4; i++) {
		cout << Lleft[i] << " " << Lright[i] << endl;
	}
	return 0;
}