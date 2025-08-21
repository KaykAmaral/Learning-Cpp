#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> numbers;

	int x;

	for (int i = 0; i < 100; i++) {
		cout << "Enter the " << (i + 1) << " number: ";
		cin >> x;
		numbers.push_back(x);
	}

	numbers.sort();

	x = 0;

	for (int n : numbers) {
		x++;
		cout << n << "  ";
		if (x % 10 == 0) { cout << "\n"; }
	}

	return 0;
}