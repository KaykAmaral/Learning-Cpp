/*
#include <iostream>

using namespace std;

int PrimeNumber(int num) {
	if (num <= 1) { return 0; }

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) { return 0; }
	}

	return 1;
}

int main() {
	int x;
	cout << "Text a number: ";
	cin >> x;
	if (PrimeNumber(x) == 1) {
		cout << "This is a Prime Number";
	}
	else {
		cout << "This isn't a Prime Number";
	}
	return 0;
}
*/