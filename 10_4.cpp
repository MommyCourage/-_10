#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
 
	float z1 = 0.0, z2 = 0.0, b = 0.0;
	cout << "Введіть: ";
	cin >> b;
	
	if (b + 2 <= 0) {
		cout << "Помилка! Не допустиме значення b" << endl;
		return 0;
	}
	else if (b < 2) {
		cout << "Помилка! Не допустиме значення b" << endl;
		return 0;
	}

	z1 = sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4)) / sqrt(pow(b, 2) - 4 + b + 2);
	z2 = 1 / sqrt(b + 2);

	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2 << endl;
	
	return 0;
}
