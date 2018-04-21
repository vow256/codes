#include <iostream>
#include <string>
using namespace std;

int main() {
	int year; string str = "ai1333";
	cin >> year; year /= 100;
	for (int i = 0; i < year; i++) str.push_back('3');
	cout << str << endl;
	return 0;
}