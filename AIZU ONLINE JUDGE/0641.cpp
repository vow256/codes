#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, d;
	int sum_a = 0; int sum_b = 0;
	int sum_c = 0; int sum_d = 0;
	cin >> n >> a >> b >> c >> d;
	while (sum_a < n) { sum_a += a; sum_b += b; }
	while (sum_c < n) { sum_c += c; sum_d += d; }
	if (sum_b < sum_d) cout << sum_b << endl;
	else cout << sum_d << endl;
	return 0;
}