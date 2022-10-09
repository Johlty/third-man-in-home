// Lab_03_4.cpp
// < Марчук Андрій Сергійович >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 16
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ( y <= - x * x && y <= 0 && y >= - x) ||
		(y <= - x * x && y >= x)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
