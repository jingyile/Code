/*1到n为已知区间，先找到其中间值，然后判断M和它大小*/ 
#include<iostream>
using namespace std;
int main()
{
	long long n,m,k;
	cin>>n>>m;
	if(n==1)
	cout<<1;
	else
	{
		k=n/2;
		if(m>k)
		{
			cout<<m-1;
		}
		if(m<=k)
		{
			cout<<m+1;
		}
	}
	return 0;	
}
/*
题目描述

有一天Misha和Andrew正在玩一个非常简单的游戏。首先，每个玩家选择1到n范围内的整数。让我们假设Misha选择了数字m，Andrew选择了数字a。

 

然后，让我们通过使用随机生成器以相同的概率在1和n之间范围内随机生成整数c，更接近数字c的玩家是获胜者。如果m和a位于与c相同的距离，Misha会赢。

 

Andrew非常想赢，所以他请你帮助他。你知道Misha选择的号码m和号码n。您需要确定Andrew选择哪些值使他的胜利的概率是最高的可能。
输入

第一行包含两个整数n和m（1≤m≤n≤10^9）-游戏中数字的范围，Misha选择的数字。
输出

一个数字 - 这样的值a，Andrew获胜的概率是最高的。如果有多个这样的值，请打印它们中的最小值。
样例输入

3 1

样例输出

2
*/
