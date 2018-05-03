#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define sum vec[i] + vec[j]

int main() {
	int n, m, near; vector<int> vec;
	while (1) {
		cin >> n >> m; if (n == 0 && m == 0) break;
		near = 0; vec.resize(n);
		for (int i = 0; i < n; i++) cin >> vec[i];
		sort(vec.begin(), vec.end(), greater<int>());
		for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (sum <= m && sum >= near) near = sum;
			if (near == m) break;
		}
		if (near == 0) cout << "NONE" << endl;
		else cout << near << endl;
		for (int i = 0; i < n; i++) vec.pop_back();
	}
	return 0;
}