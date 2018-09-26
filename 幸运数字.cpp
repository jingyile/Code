/*好像这道题的测试数据格外的水啊*/ 
#include<iostream>
using namespace std;
int main()
{
	long long n,m;
	while(cin>>n)
	{
		int cnt1=0,cnt2=0;
	m=n;
	while(m)
	{
		if(m%4!=0)
		break;
		else
		m/=4;
		cnt1++;
	}
		m=n;
	while(m)
	{
		if(m%7!=0)
		break;
		else
		m/=7;
		cnt2++;
	}
	cout<<cnt1<<" "<<cnt2<<endl;	
	}
	return 0;
}
/*
题目描述
多组数据！！！
lls非常喜欢数字4和7，看到一个数字他就想快速计算出因子里面分别有几个4和7，但是智商捉急的他总是要算很久，喜欢编程的你能够帮助他吗？
输入
第一行一个整数n（3<=n<=2^60），表示给定的数字。
输出
两个用空格隔开的数字，分别表示给定数字的因子中4和7的个数。
样例输入

112

样例输出

2 1
*/
