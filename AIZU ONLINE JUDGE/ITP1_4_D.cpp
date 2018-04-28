#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define last vec.size() - 1

int main() {
	int n; long long int sum = 0;
	cin >> n; vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i]; sum += vec[i];
	}
	stable_sort(vec.begin(), vec.end());
	cout << vec[0] << " " << vec[last] << " " << sum << endl;
	return 0;
}