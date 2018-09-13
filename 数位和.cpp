/*
题目描述
数位和：把十进制数字的每一位数字分解求和，比如123456的数位和 => 1+2+3+4+5+6=21
输入
两个正整数n,m  (1<=n<=100000,1<=m<=30)
输出
一个整数，代表1到n  数位和能被m整除的数  的个数
样例输入
12  3
样例输出
4
*/
#include<iostream>
using namespace std;
int fx(int n)//求数位和 
{
	int sum=0;
		while(n)
		{
			sum+=n%10;
			n=n/10;
		}	
	return sum;
}
int main()
{
	int n,m;
	int cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		if(fx(i)%m==0)
		cnt++;
	}
	cout<<cnt;
	return 0;
}
