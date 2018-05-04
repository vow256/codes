#include "bits//stdc++.h"
#include <boost/math/common_factor_rt.hpp>
using namespace std;
using namespace boost::math;

int main() {
	int x, y; cin >> x >> y;
	int answer = gcd(x, y); cout << answer << endl;
	return 0;
}