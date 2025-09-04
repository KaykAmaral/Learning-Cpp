/*
#include <iostream>

using namespace std;

float CelciusToFahrenheit(float celcius) {
	float fahrenheit = (celcius * 9 / 5) + 32;
	return fahrenheit;
}

float FahrenheitToCelcius(float fahrenheit) {
	float celcius = (fahrenheit - 32) * 5 / 9;
	return celcius;
}

int main() {
	for (int i = 0; i < 1; i++) {
		int x;
		cout << "What do u want?\n[ °F -> °C ] (1)\n[ °C -> °C ] (2)";
		cin >> x;
		switch (x) {
		case 1:
			cout << "\n" << FahrenheitToCelcius(x);
			break;
		case 2:
			cout << "\n" << CelciusToFahrenheit(x);
			break;
		default: 
			cout << "[ERROR] - Invalid Input\n"; i--;
		}
	}

	return 0;
}
*/