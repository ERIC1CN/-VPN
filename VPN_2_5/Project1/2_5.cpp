#include<iostream>
using namespace std;

int main()
{
	char a;
	cin >> a;
	if (int(a) >= 65 && int(a) <= 122)
	{
		if (int(a) <= 90)
		{
			cout << char(int(a) + 32);
		}
		else
		{
			cout << char(int(a) - 32);
		}
	}
	else
	{
		if (int(a) >= 48 && int(a) <= 57)
		{
			int b = a - '0';//'0'表示其为char类型，则变int后为0的ASCII码，猜测。
			cout << b * b;
		}
		else
		{
			cout << a;
		}
	}
}