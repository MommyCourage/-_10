#include <iostream>
#include <Windows.h>


using namespace std;
int main()
{
     
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    // Завдання 1
    
    int r;
    const double PI = 3.141592653589793238462643;

    cout << "Задайте значення r: ";
    cin >> r;
    cout << "Площа поверхні S = " << PI * 4 * pow(r, 2) << endl;
    cout << "Об'єм V = " << (4 * PI * pow(r, 3)) / 3 << endl;

	
   // 2 
    const int speedOfLight = 2999792;
    cout << "За годину світло пройде: " << 3600 * speedOfLight << endl;
    cout << "За добу світло пройде: " << 86400 * speedOfLight << endl;


    return 0;
 }