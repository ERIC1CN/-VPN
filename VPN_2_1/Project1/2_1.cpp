#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	if (x <= -1)
	{
		y = 2* x + cos (x) ;
		cout << y;
	}
	else
	{
		if (x >= 1)
		{
			y = sin(x) * sin(x);
			cout << y;
		}
		else
		{
			y = 1 / pow(x + 1, 2.0 / 3);
			cout << y;
		}
	}
	return 0;
}