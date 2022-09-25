#include<iostream>
using namespace std;

int main()
{
	int a, bai, shi, ge, b;
	cin >> a;
	if (a >= 100 && a < 1000)
	{
		bai = a / 100;
		shi = a % 100 / 10;
		ge = a % 100 % 10;
		b = bai * bai * bai + shi * shi * shi + ge * ge * ge;
		if (b == a)
		{
			cout << "YES" << endl;
			return 0;
		}
		else
		{
			cout << "NO" << endl;
			return 1;
		}
	}
	else
	{
		cout << "NO" << endl;
		return -1;
	}
}