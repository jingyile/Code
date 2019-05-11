#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a+b;
	char s[200];
	//itoa(c,s,10);
	string s = to_string(a + b);
	int len=strlen(s);
	int cnt=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='-')
		{
			printf("%c",s[i]);
			continue;
		}

		if(cnt==3)
		{
			cnt=0;
			printf(",%c",s[i]);
		}
		else
		{
			printf("%c",s[i]);
			cnt++;
		}
	}
	return 0;
}

