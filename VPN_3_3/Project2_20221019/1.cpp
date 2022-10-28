#include<iostream>
#include<string>
using namespace std;
/*
【问题描述】求1~N的阶乘之和S，20120727120820_861.jpg，N由键盘输入。

【输入形式】一个正整数

【输出形式】一个实型数据
*/

int main()
{
	int N;
	long long chenji = 1;
	long long sum = 0;
	cout << "请输入数字 N ：" << endl;
	cin >> N;
	int n;
	n = N;
	int j = 1;
	for (int i = 0; i < N; i++)
	{
		if (N <= 2)
		{
			do
			{
				chenji *= j;
				j++;
				cout << "阶乘" << chenji << endl;
				sum += chenji;
				cout << "阶乘之和" << sum << endl;

			} while (j < n);
		}
		else
		{
			do
			{
				chenji *= j;
				j++;
				cout << "阶乘" << chenji << endl;
				sum += chenji;
				cout << "阶乘之和" << sum << endl;

			} while (j < n - 1);
		}


		n--;
	}
	cout << sum << endl;
	return 0;
}