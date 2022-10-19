// Lab_04_4.cpp
// < Марчук Андрій Сергійович >
// Лабораторна робота No 4.4
// Табуляція функції, заданої графіком
// Варіант 16
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R1, R2, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R1)
			y = (-R1 * (x + 2)) / (-R1 + 2);
		else
			if (-R1 < x && x <= 0)
				y = sqrt(R1 * R1 - x * x) - R1;
			else
				if (0 < x && x <= R2)
					y = R2 - sqrt(R2 * R2 - x * x);
				else
					if (R2 < x && x <= 4)
						y = -R1;
					else
						y = (R1 * (x - 4)) / 2 - R1;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}