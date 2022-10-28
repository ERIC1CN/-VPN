#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n, m;
	//输入高度 n 和落地次数 m
	cin >> n >> m;
	double h, s;
	s = n;
	h = pow(1.0 / 4, m) * n;
	for (int i = 1; i < m; i++)
	{
		s += n * pow(1.0 / 4, i) * 2;
	}
	//依次输出第 m 次落地时共经过的路程和第 m 次落地后反弹的高度 
	cout <<fixed<< setprecision(2) << s+0.00005 << endl;
	cout << fixed << setprecision(2) << h+0.00005 << endl;
	return 0;
}