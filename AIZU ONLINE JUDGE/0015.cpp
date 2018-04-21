#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
	int n;
	cpp_int a, b, sum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum = a + b;
		string str = sum.str();
		if (str.length() > 80) cout << "overflow" << endl;
		else cout << a + b << endl;
	}
	return 0;
}