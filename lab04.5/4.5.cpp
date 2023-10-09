#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	double x, y;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) ||
			(y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -1. + rand() % 7;
			y = -3. + rand() % 9;
			if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) ||
				(y <= -x && y >= (x - 2) * (x - 2) - 3))
                cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}