#include <iostream>
using namespace std;

#define not_minus x - r >= 0 && y - r >= 0
#define not_fit x + r <= w && y + r <= h

int main() {
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;
	if (not_minus && not_fit) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}