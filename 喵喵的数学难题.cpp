#include<iostream>
#include<string.h>
using namespace std;
#define maxx 100010
int a[maxx];
int fx(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
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
