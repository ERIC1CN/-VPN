#include<iostream>
using namespace std;

int IsTwo(int n)
    {
        return (n & (n - 1)) == 0 ? 1 : 0;
    }
int main()
{
    int num, sum = 0;
    //cout << "请输入一个正整数：" << endl;
    cin >> num;
    if (IsTwo(num)) cout << "NONE" << endl;
    else {
        for (int i = 1; i <= num / 2; i++)
        {
            for (int k = 1;; k++)
            {
                sum = (k + 1) * (2 * i + k) / 2;
                if (sum > num)
                    break;
                if (sum == num)
                {
                    //cout << num << "=";
                    for (int j = 0; j < k; j++)
                        cout << i + j << " ";
                    cout << i + k << endl;
                }
            }
        }
    }
}