#include<iostream>
#include<string>
using namespace std;
/*
��������������1~N�Ľ׳�֮��S��20120727120820_861.jpg��N�ɼ������롣

��������ʽ��һ��������

�������ʽ��һ��ʵ������
*/

int main()
{
	int N;
	long long chenji = 1;
	long long sum = 0;
	cout << "���������� N ��" << endl;
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
				cout << "�׳�" << chenji << endl;
				sum += chenji;
				cout << "�׳�֮��" << sum << endl;

			} while (j < n);
		}
		else
		{
			do
			{
				chenji *= j;
				j++;
				cout << "�׳�" << chenji << endl;
				sum += chenji;
				cout << "�׳�֮��" << sum << endl;

			} while (j < n - 1);
		}


		n--;
	}
	cout << sum << endl;
	return 0;
}