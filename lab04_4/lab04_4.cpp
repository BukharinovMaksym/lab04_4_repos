#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, R, y, xp, xk, dx; // вхідні дані
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R; cout << endl;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = -R;
		else if ((x > -8) && (x <= -R))
			y = (R * R + R * x) / (8 - R);
		else if ((x > -R) && (x <= R))
			y = -sqrt(R * R - x * x);
		else if ((x > R) && (x <= 5))
			y = (2 * x - 2 * R) / (5 - R);
		else y = 3;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}