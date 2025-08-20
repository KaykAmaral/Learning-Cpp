#include <iostream>
#include <string>

using namespace std;

int main() {
	int numbers1[7];
	int numbers2[7];
	int operation[7];
	int result[7];

	for (int i = 0; i < 7; i++) {
		cout << "Enter the " << (i + 1) << ".1 number: ";
		cin >> numbers1[i];
		cout << "Enter the " << (i + 1) << ".2 number: ";
		cin >> numbers2[i];
		cout << "1(+) | 2(-) | 3(/) | 4(*): ";
		cin >> operation[i];
		switch (operation[i]) {
		case 1:
			result[i] = numbers1[i] + numbers2[i];
			break;
		case 2:
			result[i] = numbers1[i] - numbers2[i];
			break;
		case 3:
			result[i] = numbers1[i] / numbers2[i];
			break;
		case 4:
			result[i] = numbers1[i] * numbers2[i];
			break;
		default:
			cout << "Invalid input operation!\n";
			i--;
		}
	}

	cout << "\n1st array: ";
	for (int i = 0; i < 7; i++) {
		cout << " " << numbers1[i];
	}
	cout << "\n2nd array: ";
	for (int i = 0; i < 7; i++) {
		cout << " " << numbers2[i];
	}
	cout << "\nResult array: ";
	for (int i = 0; i < 7; i++) {
		cout << " " << result[i];
	}

	return 0;
}