#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

void intsertionSort(int *data, int size) {
	int temp, k;
	rep(i, size) {
		temp = data[i]; k = i - 1;
		while (k >= 0 && data[k] > temp) {
			data[k + 1] = data[k]; k--;
		}
		data[k + 1] = temp;
		rep(j, size) {
			if (j != 0) cout << " " << flush;
			cout << data[j] << flush;
		}
		cout << endl;
	}
	return;
}

int main() {
	int n; cin >> n; int arr[n];
	rep(i, n) cin >> arr[i];
	intsertionSort(arr, n);
	return 0;
}