#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define maxx 100
int a[maxx];
int b[maxx];
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	    long long sum=1;
		int n,m;
		cin>>n>>m;
		int i=0,j=0;
		while(n--)
		{
			int x;
			cin>>x;
			if(x>0)
			{
				a[i]=x;
				i++;
			}
			if(x<0)
			{
				b[j]=x;
				j++;
			}		
		}
while(m>=2)
{
	long long sum1=0,sum2=0;
	sort(a,a+i,cmp);//正数降序排列 
	sort(b,b+j);//负数升序排列 
if(j>=2)
{
	sum1=b[0]*b[1];
}
sum2=a[0]*a[1];
if(sum1>=sum2)
{
	sum*=sum1;
	b[0]=0,b[1]=0;
}
if(sum1<sum2)
{
	sum*=sum2;
	a[0]=0,a[1]=0;
}
m-=2;
}
if(m==1)
{
	/*有正数选最大的正数*/
	sort(a,a+i,cmp);
	if(a[0]!=0)
	sum*=a[0];
	/*没有正数选最大的负数(绝对值最小的）*/
	else
	{

	}

}
cout<<sum<<endl;
}
return 0;
}
    /*for(int x=0;x<i;x++)
    cout<<a[x]<<endl;
    for(int x=0;x<j;x++)
    cout<<b[x]<<endl;*/
