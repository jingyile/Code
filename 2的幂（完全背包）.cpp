/*
题目描述
输入一个正整数n,输出用2的幂组合出n的方案数。
对于正整数7，它有6种表示方式：
1) 1+1+1+1+1+1+1
2) 1+1+1+1+1+2
3) 1+1+1+2+2
4) 1+1+1+4
5) 1+2+2+2
6) 1+2+4
输入
一个正整数n，1<=n<=1000000
输出
一个正整数，代表用2的幂组合出n的方案数，由于结果可能很大，仅保留后九位数字。
样例输入

7

样例输出

6
*/
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
