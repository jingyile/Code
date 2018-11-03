/* 
一开始sort用的有点多，导致超时，最后发现用的多余了，顺序在第一次排完之后是没有变化的
删去多余sort，成功AC*/ 
#include<bits/stdc++.h>
using namespace std;
int a[5010];
int b[5010];
int main()
{
int t,n,m;
cin>>t;
while(t--)
{
cin>>n>>m;
for(int i=0;i<n;i++)
{
	scanf("%1d",&a[i]);
}
sort(a,a+n);
if(a[0]!=0)//首位不为0 
{
for(int i=0;i<n-m;i++)
{
cout<<a[i];	
}
cout<<endl;	
}	
else if(a[0]==0&&n-m==1)//首位为0但是只有一位 
{
	cout<<"0"<<endl; 
}
else{
	b[0]=a[0];
	int j=0,flag=0;
	for(int i=1;i<n-m;i++)
	{
		if(a[i]!=0)
		{
			flag=i;//第一个不为0的 
			break;
		}	
	}
	for(int i=0;i<n-m;i++)
	{
		if(flag!=i)
		{
			b[j++]=a[i];
		}
	}
	if(flag)
	{
		cout<<a[flag];
		for(int q=0;q<j;q++)
		cout<<b[q];	
	}
	else
	{
	cout<<"0";	
	}
	cout<<endl;
}
}	
return 0;
} 
/*
题目描述

万恶的小黑，布置了一道题给老大做：给你一个n位的数，现在要求 你随意删除m位后，任意改变顺序，输出其能够构成的最小有效整数(即不能有前导零,如果只含有0则输出0)。但是，这正赶上了老大的对象从故乡来看他，老 大怎么能丢失这种机会呢。所以他找你寻求帮助，帮他完成这个问题吧。
输入

输入包含T组数据。每组数据包含两行，第一行包含两个整数n和m，代表一个数的位数和要删除的位数个数;第二行为一个n位的整数;（0<=m<n<5000)
输出

每组数据输出一行，表示删除后能够构成的最小整数
样例输入

2
5 2
54321
5 4
42130

样例输出

123
0

*/

