/*
#include <iostream>

using namespace std;

int main() {
	int Array[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "Enter the " << (i + 1) << "." << (j + 1) << " number: ";
			int x;  cin >> x;
			Array[i][j] = x;
		}
	}

	cout << "\nArray:\n";
	for (int i = 0; i < 5; i++) {
		cout << "[   ";
		for (int j = 0; j < 5; j++) {
			cout << Array[i][j] << "  ";
		}
		cout << "]\n";
	}

	cout << "\nOddArray:\n";
	for (int i = 0; i < 5; i++) {
		cout << "[   ";
		for (int j = 0; j < 5; j++) {
			if ((i + j + 2) % 2 == 1) { cout << Array[i][j] << "  "; }
		}
		cout << "]\n";
	}

}
*/