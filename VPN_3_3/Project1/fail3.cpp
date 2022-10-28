#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N, b, c, d=1;
	int a=0;
	cin >> N;
	for (b=0;b<=N;)
	{
		b++;
		for (c = 1; c < b;)
		{
			d *= c+1;
			a += d;
			c++;
			cout << "a" << a << "d" << d << endl;
		}
		
		cout << "b" << b;
	}
	cout <<"the last a = " << a << endl;
	return 0;
}