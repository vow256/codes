#include <iostream>
#include <boost/math/common_factor_rt.hpp>
using namespace std;
using namespace boost::math;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int Ngcd = gcd(a, b);
		int Nlcm = lcm(a, b);
		cout << Ngcd << " " << Nlcm << endl;
	}
	return 0;
}
