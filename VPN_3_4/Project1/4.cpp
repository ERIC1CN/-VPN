#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	int x, y, a, b;
	cin >> x >> y;

	a = x - 1;
	b = 1;
	//һ_���Լ��
	if (y % x == 0)
	{
		a = x;
		cout << a << " ";
	}
	else
	{
		while (x % a != 0 || y % a != 0)
		{
			a--;
		}
		cout << a << " ";
	}
		
	//��_��С������
	while (a * b % x != 0 || a * b % y != 0||a*b/x==0||a*b/y==0)
	{
		b++;
	}
	cout << a*b << endl;
	return 0;
}
//���Լ������С������