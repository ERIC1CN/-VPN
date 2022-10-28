#include<iostream>
using namespace std;

int main()
{
	double Sn=0, N=0, q;
	cout << "ÇëÊäÈëqÖµ:" << endl;
	cin >> q;
	while (Sn <= q)
	{
		N++;
		Sn += (N + 1.0) / N;
	}
	cout << Sn << endl;
	return 0;
}