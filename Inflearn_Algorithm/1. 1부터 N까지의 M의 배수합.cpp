#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int sum = 0;
	
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
	{
		if(i % m == 0)//m이 i의 배수이면
		{
			sum += i; 
		}
	}
	
	cout << sum;
	return 0;
	
}

