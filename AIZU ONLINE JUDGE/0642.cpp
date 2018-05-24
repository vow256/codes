#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define check if (false_max > final) final = false_max

int main() {
	int n, temp; cin >> n; 
	int false_max = 0; int final = 0;
	rep(i, n) {
		cin >> temp;
		if (temp == 1) false_max++;
		else { check; false_max = 0; }
	}
	check; cout << final + 1 << endl;
	return 0;
}