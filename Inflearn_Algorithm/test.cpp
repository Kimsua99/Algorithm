#include <iostream>
using namespace std;

int main()
{
	int a, b, i;
	int sum = 0;

	cin >> a >> b;

	for (i = a; i < b; i++)
	{
		cout << i << "+";
		sum += i;
	}
	cout << b << "=";
	cout << sum + b;

	return 0;
}
