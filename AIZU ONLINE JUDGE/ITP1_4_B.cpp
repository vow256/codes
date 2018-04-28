#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define set fixed << setprecision(6)
#define area pow(r, 2) * M_PI
#define length r * 2 * M_PI

int main() {
	double r; cin >> r;
	cout << set << area << " " << length << endl;
	return 0;
}