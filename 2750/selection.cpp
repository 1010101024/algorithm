
#include "pch.h"
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int *a = new int [n];
	for (int i=0; i < n; i++) {
		cin >> a[i];
	}
	
	int key;

	for (int i = 1; i < n; i++) {		
		key = a[i];
		int j;
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > key) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
	}
		a[j + 1] = key;

	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	delete[]a;
	return 0;
}