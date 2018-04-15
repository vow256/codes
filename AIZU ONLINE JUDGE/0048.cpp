#include <iostream>
using namespace std;

int main() {
	double weight;
	while (cin >> weight) {
		if (weight <= 48.00) cout << "light fly" << endl;
		else if (weight <= 51.00) cout << "fly" << endl;
		else if (weight <= 54.00) cout << "bantam" << endl;
		else if (weight <= 57.00) cout << "feather" << endl;
		else if (weight <= 60.00) cout << "light" << endl;
		else if (weight <= 64.00) cout << "light welter" << endl;
		else if (weight <= 69.00) cout << "welter" << endl;
		else if (weight <= 75.00) cout << "light middle" << endl;
		else if (weight <= 81.00) cout << "middle" << endl;
		else if (weight <= 91.00) cout << "light heavy" << endl;
		else cout << "heavy" << endl;
	}
	return 0;
}