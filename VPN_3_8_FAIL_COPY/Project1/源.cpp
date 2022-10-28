#include<iostream>
using namespace std;
const int M = 10000;

int main()
{
	int a;
	cin >> a;
	if (a % 2 == 0|| a == 1)
		cout << "none" << endl;
	else
	{
		int i;
		i = 2;
		cout << a / 2 << " " <<  a / 2 + 1 << endl;
		for (i = 3; i < a / 2;i+=2)
		{
			;
		}
	}
	return 0;
}