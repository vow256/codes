#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int num = 0;
		for (int i = 1; i <= n; i++) {
			if (i <= 3) {
				if (i == 2 || i == 3) num++;
				continue;
			}
			else {
				if (i % 2 == 0 || i % 3 == 0) continue;
				if (i % 6 != 1 && i % 6 != 5) continue;
				bool check = true;
				for (int j = 5; j * j <= i; j += 6) {
					if (i % j == 0) check = false;
					if (i % (j + 2) == 0) check = false;
					if (check == false) break;
				}
				if (check == true) num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}