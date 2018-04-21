#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define Avec vec[0] >> vec[1] >> vec[2]
#define Lrule pow(vec[0], 2) + pow(vec[1], 2)
#define Rrule pow(vec[2], 2)

int main() {
	int tri = 0; int rig = 0;
	int acu = 0; int obt = 0;
	vector<int> vec(3);
	while (cin >> Avec) {
		sort(vec.begin(), vec.end());
		if (vec[0] + vec[1] > vec[2]) {
			tri++;
			if (Lrule == Rrule) rig++;
			else if (Lrule > Rrule) acu++;
			else if (Lrule < Rrule) obt++;
		}
		else break;
	}
	cout << tri << " " << rig << " " << acu << " " << obt << endl;
	return 0;
}