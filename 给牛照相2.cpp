/*区间划分问题（贪心）*/ 
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct
{
	int l;
	int r;
}NN;
bool cmp(NN a,NN b)
{
	return a.l<b.l;
}
NN a[1005];
int main()
{
	int n,k;
	cin>>n>>k;
	int i;
	for(i=0;i<k;i++)
	{
		int b,c;
		cin>>b>>c;
		a[i].l=min(b,c);//重要！ 
		a[i].r=max(b,c);//重要！ 
	}
	sort(a,a+i,cmp);
	int l,r;
	int sum=1;
	int x=0;
	for(int i=x;i<k;i=x)
	{
		l=a[i].l;
		r=a[i].r;
		for(int j=i+1;j<k;j++)
		{
			if(a[j].l>=l&&a[j].l<=r)
			{
				l=a[j].l;
				r=min(r,a[j].r);
				x=j;
			}
		}
		x++;
		sum++;
	}
	cout<<sum;
	return 0;
 } 
 /*
 2372: 给牛照相
时间限制: 1 Sec  内存限制: 128 MB
题目描述

农夫约翰想给他的N (2 <= N <= 1,000,000,000) 头牛照相，这些牛站成一排分别编号为1..N。每张照片可以拍摄连续的一些牛，并且约翰想让每头牛至少出现在一张照片上。
不幸的是有一些牛脾气不合，不想出现在同一张照片上，不合的牛有K(1 <= K <= 1000)对。给出这K对不合关系，算一下约翰最少需要拍多少张照片。

输入
第1行，两个整数N和K
第2到K+1行，每行两个数A和B，表示位置在A和B的两头牛不合，因此不能在同一张照片中。
输出

一个整数，表示约翰最少需要拍多少张照片数。

样例输入

7 3
1 3
2 4
5 6

样例输出

3

提示

约翰需要拍3张照片。

第一张拍1－2号牛

第二张拍3－5号牛

第三张拍6－7号牛
*/
