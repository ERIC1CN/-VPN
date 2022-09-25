#include<iostream>
using namespace std;

//ASCII a97,z122
int main()
{
	char a, b, c, d, e;
	int a2, b2, c2, d2, e2;
	cin >> a >> b >> c >> d >> e;
	if (int(a) + 4 >= 122)
	{
		a2 = int(a) - 26 + 4;
		cout << char (a2);
	}
	else
	{
		a2 = int (a)+4;
		cout << char (a2);
	}
	if (int(b) + 4 >= 122)
	{
		b2 = int(b) - 26 + 4;
		cout << char(b2);
	}
	else
	{
		b2 = int(b) + 4;
		cout << char(b2);
	}
	if (int(c) + 4 >= 122)
	{
		c2 = int(c) - 26 + 4;
		cout << char(c2);
	}
	else
	{
		c2 = int(c) + 4;
		cout << char(c2);
	}
	if (int(d) + 4 >= 122)
	{
		d2 = int(d) - 26 + 4;
		cout << char(d2);
	}
	else
	{
		d2 = int(d) + 4;
		cout << char(d2);
	}
	if (int(e) + 4 >= 122)
	{
		e2 = int(e) - 26 + 4;
		cout << char(e2);
	}
	else
	{
		e2 = int(e) + 4;
		cout << char(e2);
	}
	return 0;
}
