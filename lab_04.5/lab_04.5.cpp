#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, x_r, y_r;
	srand((unsigned) time(NULL));
	cout << "R = ";
	cin >> R;

	for (int i = 0; i != 10; i++) {
		cin >> x >> y;
		if (((x >= 0 && x <= R) && (y <= sqrt(R * R - x * x) && y >= -sqrt(R * R - x * x))) || ((x <= 0 && x >= -R) && ((y <= R && y >= -x) || (y >= -R && y <= x)))) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	///////////////////////
	for (int i = 0; i != 10; i++) {
		x_r = (double)-R + rand() * (R + R) / RAND_MAX;
		y_r = (double)-R + rand() * (R + R) / RAND_MAX;
		cout << "x_r = " << x_r << "\t" << "y_r = " << y_r;
		if (((x >= 0 && x <= R) && (y <= sqrt(R * R - x * x) && y >= -sqrt(R * R - x * x))) || ((x <= 0 && x >= -R) && ((y <= R && y >= -x) || (y >= -R && y <= x)))) {
			cout << "\tyes\t\n";
		}
		else {
			cout << "\tno\t\n";
		}
	}
}
