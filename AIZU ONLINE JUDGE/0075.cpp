#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int BMI(double weight, double height) {
	return weight / pow(height, 2);
}

int main() {
	double weight, height; string str, buf;
	vector<string> vec;
	while (cin >> str) {
		vec.resize(0);
		stringstream ss{ str };
		while (getline(ss, buf, ',')) 
			if(!str.empty()) vec.push_back(buf);
		weight = stod(vec[1]);
		height = stod(vec[2]);
		if (BMI(weight, height) >= 25) cout << vec[0] << endl;
		rep(i, 3) vec.pop_back();
	}
	return 0;
}