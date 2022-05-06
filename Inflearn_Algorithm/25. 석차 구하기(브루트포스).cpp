#include <iostream>
using namespace std;

int main(void) 
{
	int n;

	int a[200], b[200];

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[j] > a[i])
				b[i]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
