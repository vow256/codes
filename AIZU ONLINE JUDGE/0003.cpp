#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> vec(3);
		for (int j = 0; j < 3; j++) {
			cin >> vec[j];
		}
		sort(vec.begin(), vec.end());
		if (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}