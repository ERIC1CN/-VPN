#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	double A1 = 0, A2 = 0;//A1为质数个数，A2为质数和
	double A3 = 0;//A3为质数平均数

	cin >> a >> b;
	while (a < b)
	{
		if (a == 0)
		{
			;
		}
		else
		{
			if (a == 1)
			{

			}
			else
			{
				if (a == 2 || a == 3 || a == 5 || a == 7)//狭义的素数不包括“1”
				{
					A1 = A1 + 1;
					A2 = A2 + a;
				}
				else
				{
					if (a % 2 == 0)
					{

					}
					else
					{
						if (a % 3 == 0)
						{

						}
						else
						{
							if (a % 5 == 0)
							{

							}
							else
							{
								if (a % 7 == 0)
								{

								}
								else
								{
									A1 = A1 + 1;
									A2 = A2 + a;

								}
							}
						}
					}
				}
			}
		}

		a = a + 1;

	}
	if (A1 == 0)
	{
		cout << "no";
	}
	else
	{
		A3 = A2 / A1;
		cout << A1 << " " << A3 << endl;
	}
	return 0;
}