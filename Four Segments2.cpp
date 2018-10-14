/* res = sum(0,i)-sum(i,j)+sum(j,k)-sum(k,n)
        = s[i-1]-(s[j-1]-s[i-1])+(s[k-1]-s[j-1])-(s[n-1]-s[k-1])
        = 2(s[i-1]-s[j-1]+s[k-1])-s[n-1]
s[n-1]固定 固定s[j-1] 求s[i-1]和s[k+1]最大即可。 
*/
#include<iostream>
using namespace std;
long long sum[5010]={0};
int main()
{
	int n;
	long long t;
	long long ans=-0x7fffffffffffffff;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		sum[i]=sum[i-1]+t;
	}
	int d1,d2,d3;//
	int ans1,ans2,ans3;
	for(int j=0;j<=n;j++)
	{
		d1=0;
		for(int i=0;i<=j;i++)
		{
			if(sum[i]>sum[d1])
			d1=i;
		}
		d3=j;
		for(int k=j;k<=n;k++)
		{
			if(sum[k]>sum[d3])
			d3=k;
		}
		if(sum[d1]+sum[d3]-sum[j]>ans)
		{
			ans=sum[d1]+sum[d3]-sum[j];
			ans1=d1,ans2=j;ans3=d3;
		}
	}
	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
	return 0;
} 
