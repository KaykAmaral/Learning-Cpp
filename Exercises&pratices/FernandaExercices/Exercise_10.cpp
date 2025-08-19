/*
#include <iostream>

using namespace std;

int main() {

	int numbers[10]{};

	for (int i = 0; i < 10; i++) {
		cout << "Enter the " << (i + 1) << " number: ";
		cin >> numbers[i];
		if (numbers[i] < 0) {
			break;
		}
	}

	
	// The expression: 'sizeof(numbers) / sizeof(numbers[0])' returns the array lenght
	

	for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++) {
		numbers[i] *= -1;
		cout << "  " << numbers[i];
	}

	return 0;
}
*/