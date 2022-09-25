#include<iostream>
using namespace std;

int main()
{
	int a, shi, wu, er, yi;
	cin >> a ;
	if (a <= 100)
	{
		shi = a / 10;
		wu = a % 10 / 5 / 1;
		er = a % 10 % 5 / 2;
		yi = a % 10 % 5 % 2;
		cout << shi << " " << wu << " " << er << " " << yi;
		return 0;
	}
	else
		return 1;

}