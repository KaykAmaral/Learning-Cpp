#include <iostream>

void oldest(int age) {
	if (age >= 0 && age <= 11) {
		std::cout << "You're a child";
	}
	else if (age <= 17) {
		std::cout << "You're a teenager";
	}
	else if (age <= 49) {
		std::cout << "You're an adult";
	}
	else {
		std::cout << "You're an old person";
	}
}

int main() {
	int age;
	std::cout << "How old are you? ";
	std::cin >> age;

	oldest(age);

	return 0;
}