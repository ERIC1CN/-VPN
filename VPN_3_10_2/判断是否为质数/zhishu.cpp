#include<iostream>
#include<cmath>
#define MAX 1000000000000000000 //18位（10的18次方）
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a <= MAX)
	{
		if (a == 2)
		{
			cout << "2是质数";
			return 0;
		}
		else
		{
			if (a % 2 != 0)
			{
				if (a % 3 != 0)
				{
					if (a % 5 != 0)
					{
						if (a % 7 != 0)
						{
							cout << a << "是质数";
							return 0;
						}
						else
						{
							cout << a << "不是质数";
							return -1;
						}
					}
					else
					{
						cout << a << "不是质数";
						return -1;
					}
				}
				else
				{
					cout << a << "不是质数";
					return -1;
				}
			}
			else
			{
				cout << a << "不是质数";
				return -1;
			}
		}
	}
}