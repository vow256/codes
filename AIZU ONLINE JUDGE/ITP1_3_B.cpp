#include <iostream>
using namespace std;

int main() {
	int x; int i = 0;
	while (1) {
		i++; cin >> x; if (x == 0) break;
		cout << "Case " << i << ": " << x << endl;
	}
	return 0;
}