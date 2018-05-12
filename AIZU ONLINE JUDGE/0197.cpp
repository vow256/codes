#include "bits/stdc++.h"
using namespace std;

void EucledeanAlgorithm(long int a, long int b) {
	int step = 0;
	while (b != 0) {
		if (a < b) swap(a, b);
		a = a % b; swap(a, b); step++;
	}
	cout << a << " " << step << endl; return;
}

int main() {
	long int a, b;
	while (1) {
		cin >> a >> b; if (a == 0 && b == 0) break;
		EucledeanAlgorithm(a, b);
	}
	return 0;
}