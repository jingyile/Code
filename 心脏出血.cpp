#include<bits/stdc++.h>
using namespace std;
char s[15];
int nc[10005]; 
int main()
{
	int t,m,p;
	cin>>t>>m;
	int id=0;
	int maxn,maxn0,start=m;
	memset(nc,0,sizeof(nc));
	while(t--)
	{
	cin>>s;
	if(strcmp(s,"alloc")==0)//malloc
	{
		maxn=0,maxn0=0;
		cin>>p;
	for(int i=m;i>0;i--)
	{
		if(nc[i]==0)
		maxn0++;
		if(maxn<maxn0)
		{
		maxn=maxn0;
		start=i;	
		}
		if(nc[i]==0&&nc[i+1]!=0)
		{
			maxn0=1;
		}
	}
	if(maxn>=p)
	{
	id++;
	cout<<id<<endl;
	for(int i=start;i<start+p;i++)
	{
		nc[i]=id;	
	}	
	}
	else{
		cout<<"NULL"<<endl;
	}
	}
	if(strcmp(s,"erase")==0)//erase
	{
		int flag=1;
		cin>>p;
		for(int i=1;i<=m;i++)
		{
			if(nc[i]==p)
			{
			nc[i]=0;
			flag=0;	
			}
		}
		if(flag||p==0||p>id)//!!!
		cout<<"ILLEGAL_ERASE_ARGUMENT"<<endl;
	}
	if(strcmp(s,"defragment")==0)
	{
		for(int i=m;i>=1;i--)
		for(int j=m;j>1;j--)
		{
			if(nc[j]!=0&&nc[j-1]==0)
			{
				nc[j-1]=nc[j];
				nc[j]=0;
			}
		}
	}
//	for(int i=0;i<m;i++)
//	cout<<nc[i]<<" ";
	}
	return 0; 
}
/*
题目描述

2014年4月，一个开源加密库OpenSSL的严重漏洞“心脏出血”（Heartbleed）被披露，由于内存分配的处理不当，导致用户隐私如血液般涌出。
　　

　　听到此消息，霞姐深深感觉到

内存分配的重要性，于是她为自己设计了一个内存管理程序，她希望这个内存管理程序能够支持以下三种操作：

1.alloc n – 分配n字节的连续内存，并输出被分配的内存块的id；

2.erase x – 释放id为x的内存块；

3.defragment – 对内存进行碎片整理。

霞姐拥有长度为m字节的内存，当然她不希望她的内存管理程序出现“心脏出血”这样的漏洞，于是她对这个管理程序做出了详细的要求：

1.第一块成功分配的内存的id为1，第二块为2，以此类推；

2.执行alloc操作所开盘的内存必须是连续

的，如果有多块符合这一条件的内存块，选择最靠前的那块来分配。如果不能分配这个大小的连续空闲内存块，则输出NULL；

3.erase操作释放完的内存可以重新使用，如果要释

放的

内存块在内存中没有找到，则返回ILLEGAL_ERASE_ARGUMENT，如果分配成功则不输出任何东西；

4.defragment操作将使所有内存尽量向前靠近，不打乱他们原本的顺序。该操作不输出任何东西。

霞姐最喜欢有安全感的人了，你能不能帮她实现这个内存管理程序，赢得她的芳心呢。
Input

 第一行包括两个整数t和m（1<=t<=100;1<=m<=100），分别代表进行t次操作以及内存的大小为m字节。 
接下来的t行分别是t次操作，有三类操作： 

1. alloc n（1<=n<=100），n是正整数； 

2. erase x，x是任意的32位整数； 

3. defragment操作。
输入

输出进行操作时会产生的输出消息。每个输出占一行。
输出

输出进行操作时会产生的输出消息。每个输出占一行。

样例输入

6 10 
alloc 5
alloc 3
erase 1
alloc 6
defragment
alloc 6

样例输出

1
2
NULL
3
*/
