// Lab_03_3.cpp
// < ������ ����� ��������� >
// ����������� ������ No 3.3
// ������������, ������ �������� �������.
// ������ 16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R1; // ������� ��������
	double R2; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;
	// ������������ � ������ ����
	if (x <= - R1)
		y = ( - R1 * (x + 2)) / (- R1 + 2);
	else
		if (- R1 < x <= 0)
			y = sqrt(R1 * R1 - x * x) - R1;
		else
			if (0 < x <= R2)
				y = R2 - sqrt(R2 * R2 - x * x);
			else
				if (R2 < x <= 4)
					y = -R1;
				else
					y = (R1 * (x - 4)) / 2 - R1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
