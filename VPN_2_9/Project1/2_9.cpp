#include<iostream>
using namespace std;

int main()
{
	int a, bai, shi, ge, a2;
	cin >> a;
	if (a >= 100 && a <= 999)
	{
		bai = a / 100;
		shi = a % 100 / 10;
		ge = a % 100 % 10;
		a2 = ge * 100 + shi * 10 + bai * 1;;
		cout << a2 << endl;
		return 0;
	}
	else
	{
		cout << "-1";
		return 1;
	}
}