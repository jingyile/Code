#include<bits/stdc++.h>
using namespace std;
int a[105][105];
long long dp[105][105];
int main()
{
	int m,n;
	while(cin>>m)
	{
		memset(dp,0,sizeof(dp));//!!!
			cin>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
	dp[m-1][n-1]=1;
	for(int i=m-1;i>=0;i--)
	for(int j=n-1;j>=0;j--)
	{
		if(!a[i][j])
		{
			if(i+1<m&&!a[i+1][j])
			dp[i][j]+=dp[i+1][j];
			if(j+1<n&&!a[i][j+1])
			dp[i][j]+=dp[i][j+1];
		}
	}
		cout<<dp[0][0]<<endl;
	}
return 0;
}
/*
题目描述
Koha被邪恶的巫师困在一个m*n的矩阵当中，他被放在了矩阵的最左上角坐标(0,0)处，
而唯一的出口在矩阵最右下角坐标(m-1,n-1)处，他每次只能向右或者向下移动一格，但是邪恶的巫师怎么会这么轻松的放过他。巫师将矩阵中某些地方设置了围栏，表示不能走动，
这种情况下，请问Kona到达出口有多少条不同的路径？
输入
多组输入，到文件末结束。每组第一行为两个正整数m,n（m<=100,n<=100)表示矩阵的大小
下面的m行表示m*n的矩阵构造，其中0表示可以走，1表示不能走到
输出
每组输出包含一行，表示Kona从起点到终点的不同路径数量是多少。
样例输入

3 3
0 0 0
0 1 0
0 0 0

样例输出

2
*/
