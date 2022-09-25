#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a % 3 == 0)
	{
		if (a % 7 == 0)
		{
			cout << "3";
			return 3;
		}
		else
		{
			cout << "1";
			return 1;
		}
	}
	else
	{
		if (a % 7 == 0)
		{
			cout << "2";
			return 2;
		}
		else
		{
			cout << "4";
			return 4;
		}
	}
}