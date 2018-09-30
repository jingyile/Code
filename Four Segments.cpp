#include<bits/stdc++.h> 
using namespace std;
#define ll long long
ll a[5500],sum[5500];
ll l[5500],r[5500];
int main()
{
	int n;
	cin>>n;
	int ans1,ans2,ans3;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	ll ans=-99999999;
	for(int i=1;i<=n;i++)
	{
		if(sum[i]>sum[l[i-1]])
		l[i]=i;
		else
		l[i]=l[i-1];
	}
    r[n]=n;
    for(int i=n-1;i>=0;i--)
    {
    	if(sum[i]>=sum[r[i+1]])
    	r[i]=i;
    	else
    	r[i]=r[i+1];
	}
//	    for(int i=1;i<=n;i++)
//    cout<<sum[i]<<" "<<r[i]<<endl;
	 for (int i=0;i<=n;i++)
        if(sum[l[i]]-sum[i]+sum[r[i]]>ans) {
            ans=sum[l[i]]-sum[i]+sum[r[i]];
            ans1=l[i];
			ans2=i;
			ans3=r[i]; 
        }
	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
	return 0;
}
