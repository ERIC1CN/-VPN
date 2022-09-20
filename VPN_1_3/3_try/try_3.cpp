#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	double a, b, c, s , S=0 ;
	cin >> a >> b >> c ;
	s = (a + b + c) / 2;
	S =sqrt( s * (s - a) * (s - b) * (s - c) );
	cout << S;
	return 0;
}