#include<iostream>
#include<cmath>
#define MAX 1000000000000000000 //18λ��10��18�η���
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a <= MAX)
	{
		if (a == 2)
		{
			cout << "2������";
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
							cout << a << "������";
							return 0;
						}
						else
						{
							cout << a << "��������";
							return -1;
						}
					}
					else
					{
						cout << a << "��������";
						return -1;
					}
				}
				else
				{
					cout << a << "��������";
					return -1;
				}
			}
			else
			{
				cout << a << "��������";
				return -1;
			}
		}
	}
}