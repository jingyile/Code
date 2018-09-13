#include<iostream>
#include<string.h>
using namespace std;
#define maxx 10000
int a[maxx];
int fx(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			a[i]++;
			n=n/i;
		}
	}
	if(n>1)
	a[n]++;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    fx(i);
    for(int i=2;i<=n;i++)
    {
    	if(a[i])
    	cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}
//int k=0;
//int prime[maxx];
//int vis[maxx];
//long long fx(int n)
//{
//	if(n==1)
//	return 1;
//	return fx(n-1)*n;
//}
//void isprime()
//{
//	memset(vis,1,sizeof(vis));
//	vis[0]=vis[1]=0;
//	for(int i=2;i<=maxx;i++)
//	{
//		if(vis[i])
//		{
//			prime[k++]=i;
//			for(int j=i;j*i<maxx;j++)
//			{
//				vis[i*j]=0;
//			}
//		}
//	}
//}

