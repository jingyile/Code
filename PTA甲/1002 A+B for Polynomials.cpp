/*大体思路：就是给出两个多项式的指数和系数，然后求和
比较简单，把指数相同的系数相加即可，注意数据范围*/ 
#include<iostream>
#include<memory.h>
using namespace std;
double a[1005];
int main()
{
	int k1,k2;
	int n;
	double m;
	int  cnt;
	memset(a,0,sizeof(a));
	scanf("%d",&k1);
	for(int i=0;i<k1;i++)
	{
		scanf("%d %lf",&n,&m);
		a[n]+=m;
	}
	scanf("%d",&k2);
	for(int i=0;i<k2;i++)
	{
		scanf("%d %lf",&n,&m);
		a[n]+=m;
	}
	for(int i=0;i<1001;i++)//注意这个地方必须到1000，否则A不了边界数据 
	{
		if(a[i]!=0)
		cnt++;
	}
	printf("%d",cnt);
	for(int i=1000;i>=0;i--)
	{
		if(a[i]!=0)
		printf(" %d %.1lf",i,a[i]);
	}
	return 0;
 } 
