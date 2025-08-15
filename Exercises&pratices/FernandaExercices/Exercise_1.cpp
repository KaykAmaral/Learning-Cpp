/*
#include <iostream>
#include <cmath>

static void calc(double a, double b, double c) {
	double delta = ((pow(b, 2)) - (4 * a * c));
	if (delta > 0) {
		double x1, x2;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		std::cout << "X1 = " << x1 << "\nX2 = " << x2;
	}
	else if (delta == 0) {
		double x = (-b) / (2 * a);
		std::cout << "X1 = " << x << "\nX2 = " << x;
	}
	else {
		std::cout << "If delta is negative, x1 and x2 can't exist.\n";
	}
}

int main() {

	double a, b, c;

	std::cout << "Please text 3 numbers:\n";
	std::cout << "1st number: ";
	std::cin >> a;
	std::cout << "2nd number: ";
	std::cin >> b;
	std::cout << "3rd number: ";
	std::cin >> c;
	
	// SHOW THE VARIABLES AND RESULT
	std::cout << a << "x^2 + " << b << "x + " << c << "\n";
	calc(a, b, c);

	return 0;
}
*/