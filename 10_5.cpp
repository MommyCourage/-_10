#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	float y = 0.0, n = 0.0;
	cout << "������ y: ";
	cin >> y;
	cout << "������ n: ";
	cin >> n;
	
	if (pow(23.1 * n, 2) + cos(n) == 0) {
		cout << "ĳ����� �� 0 �� �������!" << endl;
		return 0;
	}
	else if (y<0) {
		cout << "�� ������� ������ ����� �� ��'������ �����!" << endl;
		return 0;
	}
	
	cout << "���������: " << (pow(y, 2) - 0.8 * y + sqrt(y)) / (pow(23.1 * n, 2) + cos(n)) << endl;
	
	return 0;
}