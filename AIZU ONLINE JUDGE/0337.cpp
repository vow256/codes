#include <iostream>
using namespace std;

int main() {
	int e, y; cin >> e >> y;
	if (e == 0) {
		if (1868 <= y && y <= 1911) cout << "M" << y - 1867 << endl;
		if (1912 <= y && y <= 1925) cout << "T" << y - 1911 << endl;
		if (1926 <= y && y <= 1988) cout << "S" << y - 1925 << endl;
		if (1989 <= y && y <= 2016) cout << "H" << y - 1988 << endl;
	}
	else if (e == 1) cout << y + 1867 << endl;
	else if (e == 2) cout << y + 1911 << endl;
	else if (e == 3) cout << y + 1925 << endl;
	else if (e == 4) cout << y + 1988 << endl;
	return 0;
}