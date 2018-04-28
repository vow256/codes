#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rule(x) vec[0] % x == 0 && vec[1] % x == 0 && vec[2] % x == 0

int main() {
	int n; cin >> n; vector<int> vec(n);
	bool check = false;
	for (int i = 0; i < n; i++) cin >> vec[i];
	if (rule(2)) check = true;
	stable_sort(vec.begin(), vec.end());
	if (check == true) for (int i = 1; i <= vec[0]; i++) {
		if (rule(i)) cout << i << endl;
	}
	else for (int i = 1; i <= vec[0]; i += 2) {
		if (rule(i)) cout << i << endl;
	}
	return 0;
}