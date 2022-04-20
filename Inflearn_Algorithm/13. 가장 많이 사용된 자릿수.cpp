#include <iostream>
using namespace std;

int main() 
{
	char arr[101] = { 0 };
	int max = -2147000000;
	int result;

	cin >> arr;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		arr[arr[i] - 48]++;//입력한 문자를 숫자로 바꿔서 arr 배열에 넣음.
	}

	for (int i = 0; i <= 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			result = i;
		}
	}
	cout << result;
}
