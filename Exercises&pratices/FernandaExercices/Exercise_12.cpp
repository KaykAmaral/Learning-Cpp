/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string word;

	cout << "Text a word (max 10 characteres):\n";

	for (int i = 0; i < 1; i++) {
		cin >> word;
		if (word.length() > 10) {
			cout << "The word just can have 10 char (max)\n"; i--;
		}
	}

	reverse(word.begin(), word.end());

	cout << "Inverted Word: " << word;

	return 0;
}
*/