//*
问题 G: 喵喵的数学难题
时间限制: 1 Sec  内存限制: 128 MB
提交: 125  解决: 54
[提交][状态][讨论版][命题人:acm4302]
题目描述
最近，喵喵一直在学习数学。他发现了，任意一个正整数N，都可以被一素数整除。 
发现了这个结论的他特别高兴。有一天，lls给了喵喵一个数字N，
一本正经地告诉他：“你能求所有能整除N！的素数和其相应的数量吗？” 
喵喵想了想说：“直接算不就好了嘛~” 
lls笑了笑说：“小老弟你还是太年轻~” 
你能帮助喵喵顺利求解这个问题吗？

输入
一个整数N (1≤N≤10^5)
输出
所有能整除N!的素数和其数量，共若干行，每行一对pi, ni，按照pi从小到大的顺序输出。 
样例输入

5

样例输出

2 3
3 1
5 1
*//
#include<iostream>
#include<string.h>
using namespace std;
#define maxx 100010
int a[maxx];
int fx(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		{
			a[i]++;
			n=n/i;
		}
	}
	if(n>1)
	a[n]++;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    fx(i);
    for(int i=2;i<=n;i++)
    {
    	if(a[i])
    	cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}
