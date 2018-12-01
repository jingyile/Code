#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn];
int sum[maxn];
int main()
{
	int n;
	int flag;
	while(cin>>n)
	{
	flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
		sum[i]=sum[i-1]+a[i];
		if(a[i]==0||sum[i]==0)
		flag=1;
	}
	if(flag!=1)
	{
		sort(sum,sum+n+1);
		for(int i=1;i<n;i++)
		{
			if(sum[i]==sum[i+1])
			{
			flag=1;
			break;	
			}
		}
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
	}
	return 0;	
}
/*
题目描述
You are given a number sequence a1,a2,a3...,an , your task is to find if there is a pair of interger (i,j) that ai+a(i+1)+..+aj equals to 0 and i<=j;

输入

Input consists of multiple test cases. For each case, the first line of input contains an integer n, the next line follows n integers. (n>=1 && n<=10^5 |ai|<=10^4)
输出
For each case, if there is at least one pair of integer (i,j) meet the requirement, print “YES”, otherwise print “NO” .
样例输入

5
1 2 3 4 5
5
3 4 -2 -3 1

样例输出

NO
YES

*/
