#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	if (x > 10)
	{
		y = sqrt( (x + 1) / (2 * x * x) );
		cout << y;
	}
	else
	{
		if (x <= -1)
		{
			y = 3 * sqrt(-x + 2) + 1;
			cout << y;
		}
		else
		{
			y = x * x * x * x * x + 1;
			cout << y;
		}
	}
	return 0;
}