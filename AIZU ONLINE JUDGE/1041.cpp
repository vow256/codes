#include <iostream>
using namespace std;

int main(){
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		int num; int ans = 0;
		for (int i = 0; i < n / 4; i++) {
			cin >> num; ans += num;
		}
		cout << ans << endl;
	}
	return 0;
}