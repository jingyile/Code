#include<bits/stdc++.h> 
using namespace std;
typedef struct
{
	int w;
	int d;
}wp;
wp a[5000];
int dp[15000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i].w>>a[i].d;
	for(int i=0;i<n;i++)
	for(int j=m;j>=a[i].w;j--)
	{
		dp[j]=max(dp[j],dp[j-a[i].w]+a[i].d);
	}
	cout<<dp[m];
	return 0;
}
/*
题目描述

Bessie has gone to the mall's jewelry store and spies a charm bracelet. Of course, she'd like to fill it with the best charms possible from the N (1 ≤ N ≤ 3,402) available charms. Each charm i in the supplied list has a weight Wi (1 ≤ Wi ≤ 400), a 'desirability' factor Di (1 ≤ Di ≤ 100), and can be used at most once. Bessie can only support a charm bracelet whose weight is no more than M (1 ≤ M ≤ 12,880).

Given that weight limit as a constraint and a list of the charms with their weights and desirability rating, deduce the maximum possible sum of ratings.
输入

* Line 1: Two space-separated integers: N and M
* Lines 2..N+1: Line i+1 describes charm i with two space-separated integers: Wi and Di
输出

* Line 1: A single integer that is the greatest sum of charm desirabilities that can be achieved given the weight constraints
样例输入

4 6
1 4
2 6
3 12
2 7

样例输出

23

提示

01背包问题，需要使用滚动数组进行优化，不然内存超限。
*/
