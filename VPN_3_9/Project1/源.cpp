#include<iostream>
using namespace std;

int main()

{
	int data, fator, sum; /* data��ʾҪ�жϵ�����fator��ʾ���ӣ�sum��ʾ����֮��*/

	int N;
	cin >> N;
	for (data = 2; data <= N; data++)

	{
		//1���������������ӣ���������֮�ʹ�1��ʼ

		sum = 1;

		for (fator = 2; fator <= data / 2; fator++)

		{
			/* �ж�data�ܷ�fator�������ܵĻ�fator��Ϊ���� ���Ӳ��������� */

			if (data % fator == 0)

			{
				sum += fator;

			}

		}
		if (sum == data)
		{
			cout << data << " ";
		}

		// �жϴ����Ƿ��������֮�� */

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