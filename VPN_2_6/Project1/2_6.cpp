#include<iostream>
using namespace std;

int main()
{
	int year, month;
	cin >> year >> month;
	if (month == 2)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "29";
			}
			else
			{
				cout << "28";
			}
		}
		else
		{
			if (year % 4 == 0)
			{
				cout << "29";
			}
			else
			{
				cout << "28";
			}
		}
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			cout << "31";
		}
		else
		{
			cout << "30";
		}
	}
	return 0;
}