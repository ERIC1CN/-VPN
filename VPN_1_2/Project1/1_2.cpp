#include<iostream>
using namespace std;

int main()
{
	char a;
	int b, c;
	cin >> a;
	b = int(a) - 1, c = int(a) + 1;
	cout << char(b) <<" " << a <<" " << char(c) << endl;
	cout << b <<" " << int(a) <<" " << c << endl;

	return 0;
}