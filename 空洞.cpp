/*简单题，试试映射表吧*/ 
#include<bits/stdc++.h>
using namespace std;
map<char,int>p;
int main()
{
	int n,sum;
	p['a']=p['b']=p['d']=p['e']=p['g']=p['o']=p['p']=p['q']=1;
	p['A']=p['D']=p['O']=p['P']=p['Q']=p['R']=1;
	p['B']=2;
	char a[1010];
	int t;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>a;
		n=strlen(a);
		for(int i=0;i<n;i++)
		{
			sum+=p[a[i]];
		}
		cout<<sum<<endl;
	}
	return 0;
}
/*
题目描述

春天来了，单身的霞姐越发地空虚寂寞，于是她想到一个办法，她认 为只要把英文字母上的洞都涂满就能填补心中的空洞，现在有一个字符串，请问霞姐需要涂几个洞。比如：a需要涂一次，k不需要涂，B需要填2次。提供参 考：abcdefghijklmnopqrstuvwxyz,ABCDEFGHIJKLMNOPQRSTUVWXYZ
输入

第一行是一个正整数t，代表有t个字符串。 

接下去t行，每行有一个字符串，长度<=1000，字符串中只有a-z,A
输出

 对于每个字符串输出霞姐需要涂鸦的次数。
样例输入

2
abcg
ABCD

样例输出

3
4
*/

