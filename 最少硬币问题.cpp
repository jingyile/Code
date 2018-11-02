#include<bits/stdc++.h>
using namespace std;
int T[20],Coins[20];
int dp[20010];
int main()
{
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>T[i]>>Coins[i];	
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		dp[i]=999999;
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=Coins[i];j++)
	for(int k=m;k>=T[i];k--)
	{
		dp[k]=min(dp[k],dp[k-T[i]]+1);
	}
	if(dp[m]<=m)
	{
		cout<<dp[m];
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}

