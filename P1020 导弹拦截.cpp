#include<bits/stdc++.h>
using namespace std;
int a[100005];
int f[100005];
int main()
{
	int m=0,x;
while(cin>>x)
{
	a[++m]=x;
}
int ans1=0;
for(int i=1;i<=m;i++)
{
	f[i]=1;
	for(int j=i-1;j>0;j--)
	{
		if(a[j]>=a[i])
		f[i]=max(f[i],f[j]+1);
	}
	ans1=max(ans1,f[i]);
}
int ans2=0;
for(int i=1;i<=m;i++)
{
	f[i]=1;
	for(int j=i-1;j>0;j--)
	{
		if(a[j]<a[i])
		f[i]=max(f[i],f[j]+1);
	}
	ans2=max(ans2,f[i]);
}
cout<<ans1<<endl<<ans2;
return 0;	
} 
