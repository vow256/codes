#include <iostream>
using namespace std;

#define i0 i == 0
#define j0 j == 0
#define ie i == h - 1
#define je j == w - 1
#define ia i == (h - 1) / 2
#define ja j == (w - 1) / 2

int main() {
	int w, h;
	char c;
	cin >> w >> h >> c;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((i0 && (j0 || je)) || (ie && (j0 || je))) cout << '+' << flush;
			else if (i0 || ie) cout << '-' << flush;
			else if (j0 || je) cout << '|' << flush;
			else if (ia && ja) cout << c << flush;
			else cout << '.' << flush;
			if (je) cout << endl;
		}
	}
	return 0;
}