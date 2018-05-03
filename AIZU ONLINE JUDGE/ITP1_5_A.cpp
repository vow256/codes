#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define cout_e cout << endl

int main() {
	int h, w;
	while (1) {
		cin >> h >> w; if (h == 0 && w == 0) break;
		rep(i, h) {	rep(i, w) cout << "#" << flush; cout_e; } cout_e;
	}
	return 0;
}