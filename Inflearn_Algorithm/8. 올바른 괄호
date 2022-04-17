#include<stdio.h>
using namespace std;
int main()
{
	char str[100];
	int cnt=0;
	scanf("%s", &str);
	
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i] == '(') 
			cnt++;
		else if(str[i] == ')') 
			cnt--;
		
		if(cnt < 0) 
			break;
	}
	
	if(cnt==0) 
		printf("YES\n");
	else 
		printf("NO\n");
		
	return 0;
}
