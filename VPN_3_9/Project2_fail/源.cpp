#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int sum = 0;
	int i;
	for (i = 0; i < a / 2; i++)
	{
		if (a == i * (a / i))
		{
			sum += i;
		}
	}
	if (sum == a)
	{
		for (i = 0; i < a / 2; i++)
		{
			if (a == i * (a / i))
			{
				cout << i << " ";
			}
		}
	}
	return 0;
}