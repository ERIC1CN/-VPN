
#include<iostream>
using namespace std;

int main()
{
	int a;
	int b = 10;
	int c;
	cin >> a;
	while (a / b != 0)
	{
		b *= 10;
	}
	b /= 10;
	//cout << "b " << b << endl;
	c = a / b;
	//cout << "c " << c << endl;
	while (b >= 10)
	{
		a %= b;
		b /= 10;
		//cout << "a_= " << a << endl;
		//cout << "b_= " << b << endl;
		if ( a/b > c)
		{
			c = a /b ;
		//	cout << "c_1= " << c << endl;
		}
		else
		{
		//	cout << "else" << endl;
		}
		
	}
	cout << c << endl;
	return 0;
}