/*
#include <iostream>

using namespace std;

int main() {
	int BiArray[6][6];
	int Array[6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			int x;
			cout << "Enter the " << (i + 1) << "." << (j + 1) << " number: ";
			cin >> x; BiArray[i][j] = x;
		}
	}

	for (int i = 0; i < 6; i++) {
		if (i != 5) {
			Array[i] = BiArray[i][i + 1];
		}
		else {
			Array[i] = 0;
		}
	}

	for (int i = 0; i < 6; i++) {
		
	}

	return 0;
}
*/