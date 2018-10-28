#include<iostream>
using namespace std;
int a[100010];
bool flag;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		flag=false;
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		if(a[1]>a[2])//凹 
		{
			int k;
			for(int i=1;i<=n;i++)
			{
				if(a[i]<a[i+1])
				{
					k=i;//转折点 
					break;
				}
			}
			int j;
			for(j=k;j<n;j++)
			{
				if(a[j]>=a[j+1])
				{
					break;
				}
			} 
			if(j==n&&a[n-1]<a[n])
			flag=true;
			else
			flag=false;
		}
		else if(a[1]<a[2])//凸 
		{
			int k;
			for(int i=1;i<=n;i++)
			{
				if(a[i]>a[i+1])
				{
					k=i;//转折点 
					break;
				}
			}
			int j;
			for(j=k;j<n;j++)
			{
				if(a[j]<=a[j+1])
				{
					break;
				}
			} 
			if(j==n&&a[n-1]>a[n])
			flag=true;
			else
			flag=false;
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
/*
2381: 军训
时间限制: 3 Sec  内存限制: 128 MB
提交: 896  解决: 182
[提交][状态][讨论版][命题人:外部导入]
题目描述
有N 个军训新学员开始了他们的军训生活，第一天教官教他们站队，根据他们的身高，
站成“凸”字形或者“凹”字形，也就是从左到右身高依次递增再递减或者依次递减再递增，
如果是“凸”字形队列，身高最高的人可以有一个或者多个，其他人必须严格递增或或者递减，
同样地，如果是“凹”字形队列，身高最矮的人可以有一个或者多个，其他人必须严格递增
或者递减，现在这N 个同学已经站好了队，请你来判断一下现在这个队形是否是“凸”的
或者“凹”的，如果是即输出YES，否则输出NO。
输入
一个整数T(T<=50)表示数据组数，接下来每组数据包含两部分，首先是一个整数N(N<=100000)，
表示人数，然后下一行N 个整数，表示每个人的身高h(h<=100000)。
输出
对于每组数据，如果队列是“凸”的或者“凹”的，则输出YES，否则输出NO。
样例输入

5
5
1 2 3 2 1
5
3 2 1 2 3
5
1 1 2 1 1
5
1 2 3 4 5
5
5 4 3 2 1

样例输出

YES
YES
NO
NO
NO
*/
