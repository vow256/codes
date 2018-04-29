#include <iostream>
using namespace std;

int main() {
	int t, n, s, f, sum;
	while (1) {
		cin >> t; if (t == 0) break;
		cin >> n; sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> s >> f; sum += f - s;
		}
		if (sum >= t) cout << "OK" << endl;
		else cout << t - sum << endl;
	}
	return 0;
}