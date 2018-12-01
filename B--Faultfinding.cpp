#include<bits/stdc++.h>
#include<map>
using namespace std;
#define maxn 10005 
map<int,int> a;
int flag[maxn];
int main()
{
	int n;
	int x;
	int cnt;
	while(cin>>n)
	{
		memset(flag,0,sizeof(flag));
		cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i]=x;
		}
		for(int i=0;i<n;i++)
		{
			if(!flag[a[i]])
			{
			cnt++;
			flag[a[i]]=1;	
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
/*
题目描述

Do you remember the game in which we find difference among several similar pictures? Now we change it into digital version. There are N digits, same or different. Please find how many different digits there are among them and output the number.
输入

Each group of the first line is N (1<=N<=10000). The second line consists N integers.
输出

The number of different digits.
样例输入

2
1 1
3 
1 2 3

样例输出

1
3
*/
