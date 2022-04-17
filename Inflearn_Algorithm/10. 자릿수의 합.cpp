#include<stdio.h>
using namespace std;

int digit_sum(int x)
{
	int results = 0, tmp;

	while (x > 0)
	{
		tmp = x % 10;
		results += tmp;
		x = x / 10;

	}
	return results;
}

int main()
{
	int n;
	int s;
	int max = -2147000000;
	int res = 0;
	int result = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &s);
		res = digit_sum(s);

		if (res > max)
		{
			max = res;
			result = s;
		}
		else if (res == max)
		{
			if (s > result) result = s;
		}

	}
	printf("%d", result);


	return 0;
}
