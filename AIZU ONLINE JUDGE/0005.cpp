#include <iostream>
#include <boost/math/common_factor_rt.hpp>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int Ngcd = boost::math::gcd(a, b);
		int Nlcm = boost::math::lcm(a, b);
		cout << Ngcd << " " << Nlcm << endl;
	}
	return 0;
}