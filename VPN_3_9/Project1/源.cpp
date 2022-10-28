#include<iostream>
using namespace std;

int main()

{
	int data, fator, sum; /* data表示要判断的数，fator表示因子，sum表示因子之和*/

	int N;
	cin >> N;
	for (data = 2; data <= N; data++)

	{
		//1是所有整数的因子，所以因子之和从1开始

		sum = 1;

		for (fator = 2; fator <= data / 2; fator++)

		{
			/* 判断data能否被fator整除，能的话fator即为因子 因子不包括自身 */

			if (data % fator == 0)

			{
				sum += fator;

			}

		}
		if (sum == data)
		{
			cout << data << " ";
		}

		// 判断此数是否等于因子之和 */

		/* if (sum == data)

		{
			printf("%d its factors are 1, ", data);

			for (fator = 2; fator <= data / 2; fator++)

			{
				if (data % fator == 0)

				{
					printf("%d, ", fator);

				}

			}

			printf("\n");

		}
		*/


	}

	return 0;

}