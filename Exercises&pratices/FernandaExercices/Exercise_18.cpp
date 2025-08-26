#include <iostream>

using namespace std;

int main() {
	int BiArray[3][5];
	int ArraySum[3]{0,0,0};
	int x;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {

			cout << "Enter the number " << (i + 1) << "." << (j + 1) << " number: ";
			cin >> x;
			BiArray[i][j] = x;
			ArraySum[i] += x;

		}
	}

	cout << "\nSum Lines:    ";

	for (int i = 0; i < 3; i++) {
		cout << ArraySum[i] << "   ";
	}

	return 0;
}