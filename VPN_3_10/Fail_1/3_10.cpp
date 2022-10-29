#include<iostream>
#include<cmath>

#define MAX 10000000 
using namespace std;


int main()
{
	int a=0, b;
	int A1 = 0, A2 = 0;
	double A3 = 0;
	cin >> a >> b;
	//for (; a <= b;)
	while(a<=b)
	{

		if (a <= MAX)
		{
			if (a == 2)
			{
				A1++;
				A2 += a;
				//break;
			}
			else
			{
				if (a % 2 != 0)
				{
					if (a % 3 != 0)
					{
						if (a % 5 != 0)
						{
							if (a % 7 != 0)
							{
								A1++;
								A2 += a;
								//break;
								//return 0;
							}
							else
							{
								//break;
								//return -1;
							}
						}
						else
						{
							//break;
							//return -1;
						}
					}
					else
					{
						//break;
						//return -1;
					}
				}
				else
				{
					//break;
					//return -1;
				}
			}
		}
		A3 = A2 * 1.0 / A1;
		if (A1 == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << "12345" << A1 << A3;
		}
	}
	

}