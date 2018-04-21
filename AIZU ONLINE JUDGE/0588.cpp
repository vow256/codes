#include <iostream>
using namespace std;

int main() {
	int ans, num; char cha; cin >> ans;
	while (1) {
		cin >> cha;
		if (cha != '=') {
			cin >> num;
			if (cha == '+') ans += num;
			if (cha == '-') ans -= num;
			if (cha == '*') ans *= num;
			if (cha == '/') ans /= num;
		}
		else break;
	}
	cout << ans << endl;
	return 0;
}