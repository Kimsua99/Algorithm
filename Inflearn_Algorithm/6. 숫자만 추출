#include <iostream>
using namespace std;

int main() 
{
	char arr[100];
	int res = 0, cnt = 0, i;

	cin >> arr;

	for (i = 0; arr[i] != '\0'; i++)//배열에서 문자열의 끝을 알리는 null문자인 \0이 들어가는데, \0을 만나면 멈춤(같지 않아 거짓이 됨)
	{
		//숫자만 추출, 0~9
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			res = res * 10 + (arr[i] - 48);//처음에 res = 0이면 0이 나옴. 
		}
	}
	cout << res << '\n';;

	//약수의 개수
	for (i = 1; i <= res; i++)
	{
		if (res % i == 0)
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}
