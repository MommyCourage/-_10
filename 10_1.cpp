#include <iostream>
#include <Windows.h>


using namespace std;
int main()
{
     
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    // �������� 1
    
    int r;
    const double PI = 3.141592653589793238462643;

    cout << "������� �������� r: ";
    cin >> r;
    cout << "����� ������� S = " << PI * 4 * pow(r, 2) << endl;
    cout << "��'�� V = " << (4 * PI * pow(r, 3)) / 3 << endl;

	
   // 2 
    const int speedOfLight = 2999792;
    cout << "�� ������ ����� ������: " << 3600 * speedOfLight << endl;
    cout << "�� ���� ����� ������: " << 86400 * speedOfLight << endl;


    return 0;
 }