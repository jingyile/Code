/*循环少写了一个等号，真是粗心害死人啊。。。*/ 
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b,a||b)
	{
		bool flag=true;
		for(int i=0;i<=99;i++)
		{
			if((a*100+i)%b==0)
			{
			if(flag)
			{
			printf("%02d",i);
			flag=false;	
			}
			else
			printf(" %02d",i);
			}

		}
		cout<<endl;
	}
	return 0;
}
/*
题目描述
一个整数，只知道前几位，不知道末二位，被另一个整数除尽了，那么该数的末二位该是什么呢？ 
输入
输入数据有若干组，每组数据包含二个整数a，b（0<a<10000, 10<b<100），若遇到0 0则处理结束。 
输出
对应每组数据，将满足条件的所有尾数在一行内输出，格式见样本输出。同组数据的输出，其每个尾数之间空一格，行末没有空格。 
样例输入

200 40
1992 95
0 0

样例输出

00 40 80
15
*/
