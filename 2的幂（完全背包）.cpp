#include<iostream>
using namespace std;
#define mod 1000000000
#define maxx 1000010
int dp[maxx]={1};
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i<<=1)
		for(int j=i; j<=n; j++) {
			dp[j]+=dp[j-i];
			if(dp[j]>=mod) 
			dp[j]%=mod;
		}
	cout<<dp[n];
	return 0;
}
