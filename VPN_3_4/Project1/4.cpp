#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	int x, y, a, b;
	cin >> x >> y;

	a = x - 1;
	b = 1;
	//一_最大公约数
	if (y % x == 0)
	{
		a = x;
		cout << a << " ";
	}
	else
	{
		while (x % a != 0 || y % a != 0)
		{
			a--;
		}
		cout << a << " ";
	}
		
	//二_最小公倍数
	while (a * b % x != 0 || a * b % y != 0||a*b/x==0||a*b/y==0)
	{
		b++;
	}
	cout << a*b << endl;
	return 0;
}
//最大公约数与最小公倍数