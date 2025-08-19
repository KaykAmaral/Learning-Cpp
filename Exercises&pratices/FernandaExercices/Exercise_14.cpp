/*
#include <iostream>

using namespace std;

int main() {
	int array[12];
	int min = 99999999999999999;
	int max = -99999999999999999;
	int pairs = 0;
	double pairPercent;

	for (int i = 0; i < 12; i++) {
		cout << "Enter the " << (i + 1) << " number: ";
		cin >> array[i];
		if (array[i] < min) { min = array[i]; }
		if (array[i] > max) { max = array[i]; }
		if (array[i] % 2 == 0) { pairs++; }
	}

	pairPercent = (double)pairs * 100 / 12;

	cout << "Max number: " << max << "\nMin Number: " << min << "\nPair Percent: " << pairPercent << "%";

	return 0;
}
*/