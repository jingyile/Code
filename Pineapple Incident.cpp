#include<iostream>
using namespace std;
#define ll long long
int main() {
	int t;
	ll x,s;
	cin>>t>>s>>x;
	if(t>x)
		cout<<"NO";
	if(t==x)
		cout<<"YES";
	if(t<x) {
		bool a=(x-t)%s==0;
		bool b=(x-t)%s==1;
		bool c=(x-t)!=1;
		if(a||b&&c)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}
/*
题目描述

泰德有一个菠萝。这种菠萝能够像斗牛犬一样吠叫！在时间t（以秒为单位），它第一次吠叫。然后每隔s秒后，它以1秒的间隔吠叫两次。因此它在时间t，t + s，t + s + 1，t + 2 s，t + 2 s + 1等时吠叫。

Barney早上醒来想要吃菠萝，但是当它吠叫时他不能吃。Barney计划在时间x（以秒为单位）吃它，所以他让你告诉他当时是否会吠叫。
输入

一行包含三个整数，t,s,x（0<=t,x<=10^9,2<=s<=10^9）
输出

如果菠萝在时间x吠叫,打印“YES”，否则打印“NO".
样例输入

3 10 4

样例输出

NO
*/
