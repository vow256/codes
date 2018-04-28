#include <iostream>
#include <iomanip>
using namespace std;

#define set fixed << setprecision(8)
#define d (int)(a / b)
#define r (int)a % (int)b
#define f a / b

int main() {
	double a, b;
	cin >> a >> b;
	cout << set << d << " " << r << " " << f << endl;
	return 0;
}