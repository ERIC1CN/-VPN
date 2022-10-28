#include<stdio.h>

int main() {
	int sum;
	for (int i = 2; i <= 1000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			int t = i % j;
			if (t == 0)
				sum += j;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
}