#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ax = 0, ay = 0, bx = 15, by = 14, cx = - 15, cy = 16;
	float s1, s2, s3;

	cout << "Перша точка: (" << ax << " ; " << ay << ")" << endl;
	cout << "Друга точка: (" << bx << " ; " << by << ")" << endl;
	cout << "Третя точка: (" << cx << " ; " << cy << ")" << endl;

	s1 = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
	s2 = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
	s3 = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));

	cout << "Перша сторона трикутника: " << s1 << endl;
	cout << "Друга сторона трикутника: " << s2 << endl;
	cout << "Третя сторона трикутника: " << s3 << endl;

	cout << "Медіана трикутника: " << 0.5 * sqrt(2 * pow(s1, 2) + 2 * pow(s2, 2) - pow(s3, 2)) << endl;
	cout << "Бісектриса трикутника: " << sqrt(s1 * s2 * (s1 + s2 + s3) * (s1 + s2 - s3)) / s1 + s2 << endl;
		  
	return 0;
}
