#include <iostream>

using namespace std;

int main() {
	int array[10];
	int arrayPlus[10]{1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	for (int i = 0; i < 10; i++) {
		cout << "Text the " << (i + 1) << " number: ";
		cin >> array[i];
		for (int j = array[i]; j > 0; j--) {
			arrayPlus[i] *= j;
		}
	}

	cout << "Array Plus: ";

	for (int i = 0; i < 10; i++) {
		cout << "  " << arrayPlus[i];
	}

}