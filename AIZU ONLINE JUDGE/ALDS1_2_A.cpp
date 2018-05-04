#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

void bubbleSort(int *data, int size) {
	int count = 0; bool flag = true;
	while (flag) {
		flag = false;
		for (int i = size - 1; i > 0; i--)
			if (data[i] < data[i - 1]) {
				swap(data[i], data[i - 1]); flag = true; count++;
			}
	}
	rep(i, size) {
		if (i != 0) cout << " " << flush;
		cout << data[i] << flush;
	}
	cout << endl << count << endl;
	return;
}

int main() {
	int n; cin >> n; int arr[n];
	rep(i, n) cin >> arr[i];
	bubbleSort(arr, n);
	return 0;
}