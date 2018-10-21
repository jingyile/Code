//比较懒，本来用sort写的，却忽略了它是一个不稳定排序，所以改用稳定且简单的冒泡
 #include<bits/stdc++.h>
using namespace std;
typedef struct{
	int id;
	int m;
}ST;
ST a[10010];
bool cmp(ST a,ST b)
{
	if(a.m>b.m)
	return true;
	else
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].id>>a[i].m;
	}
	for(int i=0;i<n-1;i++)
	for(int j=0;j<n-i-1;j++)
	{
		
		if(a[j].m<a[j+1].m)
		{
			ST x=a[j];
			a[j]=a[j+1];
			a[j+1]=x;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i].id<<" "<<a[i].m<<endl;	
	}
	cout<<endl;
	return 0;
 } 
 /*
 题目描述
ACM 比赛都会产生一个最终排名，排名按照题数多少来决定。但是现在，有太多的队伍参与，手动计算排名已经不能满足比赛的需求。现在有一份名单记录各个队伍的ID 和做出的题目数，你能不能写一个程序，产生最终的排名。排名要求做出题目数量多的队伍排在前面，如果题数相等，保持输入时的相对顺序不要改变。
输入
第一行包含一个正整数T( 1=< T <= 15),表示有T 组测试数据。每组数据第一行有一个正整数N（ 1< N <= 10000）,表示队伍数量。接下来N 行包含两个整数，1 =< ID <=10^7, 0 =< M <= 100。ID——队伍的编号，M——做出的题数。

输出
每组数据输出包含N 行，第i 行有两个整数，ID 和M 表示排在第i 位的队伍的ID 和做出的题数。
样例输入

1
8
1 2
16 3
11 2
20 3
3 5
26 4
7 1
22 4

样例输出

3 5
26 4
22 4
16 3
20 3
1 2
11 2
7 1
*/
