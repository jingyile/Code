/*，时间复杂度过高，不能AC，需要打表解*/ 
#include<bits/stdc++.h>
using namespace std;
int a[]={1,3,7,8};
int b[100];
int fx(int x)
{
	for(int i=0;i<4;i++)
	{
		if(x>a[i])
		{
			if(fx(x-a[i])==0)//对方输 
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<fx(b[i])<<endl;
	}
	return 0;
}
