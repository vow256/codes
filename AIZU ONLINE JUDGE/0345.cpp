#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec(4);
	for (int i = 0; i < 4; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	if (vec[0] == vec[1] && vec[2] == vec[3]) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}