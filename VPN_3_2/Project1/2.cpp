#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a = 99, ge, shi, bai, result, N, b;
	
	cin >> N;
	

	for (;a <= N;)
	{
		bai = a / 100;
		shi = a % 100 / 10;
		ge = a % 100 % 10;
		b = pow(bai, 3) + pow(shi, 3) + pow(ge, 3);
		if (a == b)
		{
			result = 1;
	
			
		}
	    else
		{
			result = 2;
			
		}
		
		while (result == 1)
		{
			cout << a<<" ";
			break;

		}
	    result = 0;
		a++;
	}
	return 0;
}