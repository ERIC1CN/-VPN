#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n, m;
	//����߶� n ����ش��� m
	cin >> n >> m;
	double h, s;
	s = n;
	h = pow(1.0 / 4, m) * n;
	for (int i = 1; i < m; i++)
	{
		s += n * pow(1.0 / 4, i) * 2;
	}
	//��������� m �����ʱ��������·�̺͵� m ����غ󷴵��ĸ߶� 
	cout <<fixed<< setprecision(2) << s+0.00005 << endl;
	cout << fixed << setprecision(2) << h+0.00005 << endl;
	return 0;
}