#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	//��2/1, 3/2, 5/3, 8/5, 13/8, 21/13...��ǰn���
	double a, b, c, d, e, n;
	cin >> n;//����һ������
	for (a = 2, b = 1, c = 2, d = 0, e = 1; e < n; e++)
	{
		
		d = a;
		a = a + b;
		b = d;
		c += a / b;
	}
	cout << c << endl;//Sn
	return 0;
}