#include <iostream>
using namespace std;

int main() {
	int sum = 0; int temp;
	for (int i = 0; i < 10; i++) { cin >> temp; sum += temp; }
	cout << sum << endl;
	return 0;
}