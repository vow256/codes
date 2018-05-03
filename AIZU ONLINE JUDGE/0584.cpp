#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, num; cin >> n; 
	vector<string> vec(n);
	vector<int> vec_alpha(n - 1);
	vector<int> vec_beta(0);
	for (int i = 0; i < n; i++) cin >> vec[i];
	for (int i = 0; i < n; i++) {
		num = 0;
		for (int j = 0; j < n; j++)
			if (i != j) { vec_alpha[num] = stoi(vec[i] + vec[j]); num++; }
		sort(vec_alpha.begin(), vec_alpha.end());
		vec_beta.push_back(vec_alpha[0]);
		vec_beta.push_back(vec_alpha[1]);
		vec_beta.push_back(vec_alpha[2]);
	}
	sort(vec_beta.begin(), vec_beta.end());
	cout << vec_beta[2] << endl;
	return 0;
}