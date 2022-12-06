#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float b = 3, y = 0.0, a = 0.0, x = 0.0;
	const float N = 9.1, E = 2.71828;
	
	cout << "¬вед≥ть b: ";
	cin >> b;

	x = pow(E, b) + N;
	a = sqrt(pow(x, 2) + pow(b, 2));
	y = log10(a) / log10(b);
	
	cout << "x =" << x << endl;
	cout << "a =" << a << endl;
	cout << "y =" << y << endl;

	return 0;
}
