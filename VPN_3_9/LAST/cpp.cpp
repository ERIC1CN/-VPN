#include<iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;
	for (int i = 2; i <= A; i++) 
	{
		int sum = 0;
		for (int j = 1; j < i; j++) 
		{
			int t = i % j;
			if (t == 0)
				sum += j;
		}
		if (sum == i)
			cout << i << " ";
	}
	return 0;
}