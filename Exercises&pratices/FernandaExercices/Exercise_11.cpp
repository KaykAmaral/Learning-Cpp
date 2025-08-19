/*
#include <iostream>

using namespace std;

int main() {

	int array[101]{};
	array[0] = 0;
	int x = 0;
	int lastNumber;

	for (int i = 1; i <= (sizeof(array) / sizeof(array[0])); i++) {
		cout << "Enter the " << i << " number: ";
		cin >> array[i];
		if (array[i] == 0) { break; }
		lastNumber = array[i];
	}

	for (int i = 1; i <= (sizeof(array) / sizeof(array[0])); i++) {
		if (array[i] == lastNumber) { x++; }
	}

	cout << "Numbers equal to last number is: " << (x / 10);


	cout << x;

}
*/