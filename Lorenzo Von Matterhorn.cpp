/*考虑到数据很大，用map存储
二叉树，任意两个节点间的路径*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>p;
void updata(ll v,ll u,ll w)
{
	while(v!=u)
	{
	if(v<u)
	swap(v,u);
	p[v]+=w;
	v>>=1;	
	}
}
ll solve(ll v,ll u)
{
	ll ans=0;
	while(v!=u)
	{
		if(v<u)
	swap(v,u);
	ans+=p[v];
	v>>=1;
	}
	return ans;	
}
int main()
{
	int n,op;
	ll u,v,w;
	cin>>n;
	while(n--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>v>>u>>w;
			updata(v,u,w);
		}
		else
		{
			cin>>v>>u;
			cout<<solve(v,u)<<endl;
		}
	}
	return 0;
}
/*
题目描述

Barney住在纽约。纽约市有无限数量的路口，路口为从1开始编号的正整数。在路口i和2*i以及i和2*i +1之间存在双向道路,您可以清楚地看到任意两个路口之间存在唯一的最短路径。 

最初任何人都可以免费通过所有道路。但是由于SlapsGiving领先于我们，很快就会有q个连续事件发生。有两种类型的事件： 

1.政府制定新规则。规则可以用整数v，u和w表示。作为这一行动的结果，从u到v的最短路径上的所有道路的通过费用增加了w美元。 

2. Barney从路口v移动到路口u那里是他想拥抱的一个女孩。他总是使用两个十字路口之间的最短路径（访问最小数量的交叉路口或道路）。 

政府需要你的计算。每次Barney去拥抱一个女孩时，他应该支付多少钱
输入

输入的第一行包含一个整数q（1≤q≤1 000）。

下面q行按时间顺序包含有关事件的信息。每个事件的形式描述 


1 v u w如果当政府提出一个新的规则有关从增加从u到v的最短路径上的所有道路的通过费w美元。

2 v u当Barney从路口v到路口u拥抱一个女孩。

1≤v，u?≤10^18，v ≠ u，1≤ w?≤10^9
输出

对于第二类事件，按相应事件的时间顺序在一行中打印Barney道路的通行费总和。
样例输入

7
1 3 4 30
1 4 1 2
1 3 6 8
2 4 3
1 6 1 40
2 3 7
2 2 4

样例输出

94
0
32

*/
