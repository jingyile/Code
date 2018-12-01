#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int x;
	int y;
}QQ;
QQ a[5];
int main()
{
	while(cin>>a[0].x)
	{
	cin>>a[0].y>>a[1].x>>a[1].y;
	if(a[0].x>a[1].x)
	swap(a[0],a[1]);
	if(fabs(a[0].x-a[1].x)!=fabs(a[0].y-a[1].y)||a[0].x==a[1].x||a[0].y==a[1].y)
	{
		cout<<"-1"<<endl;
		continue;
	}
	else if(a[0].y<a[1].y)
	{
    a[2].x=min(a[0].x,a[1].x);
	a[2].y=max(a[0].y,a[1].y);	
	a[3].x=max(a[0].x,a[1].x);
	a[3].y=min(a[0].y,a[1].y);	
	}
	else{
	a[2].x=min(a[0].x,a[1].x);
	a[2].y=min(a[0].y,a[1].y);	
	a[3].x=max(a[0].x,a[1].x);
	a[3].y=max(a[0].y,a[1].y);
	}
	cout<<a[2].x<<" "<<a[2].y<<" "<<a[3].x<<" "<<a[3].y<<endl;
	}
	return 0;
}
/*
题目描述
今天，pasher打算在一个浪漫的花园和他的搭档们聚餐，但是不幸的是，pasher忘记了花园的地点，他只记得这个花园看上去像个平行于坐标轴的正方形，他还记得花园的每个顶点上都有一棵大数。现在，pasher知道其中两棵树的坐标，且这两棵树在对角线上，你能帮他找出另外两棵树的坐标吗?
输入
多组输入，直到文件末。每组输入包含一行，第一行包含四个整数，x1,y1,x2,y2，代表pasher知道的两棵树的坐标，（-100<=x1,y1,x2,y2<=100),其中x1,y1代表第一棵树，x2,y2代表第二棵树。
输出
如果没有解则输出-1。否则输出另外两棵树的坐标x3,y3,x4,y4，按x递增的顺序输出.
样例输入

0 0 1 1

样例输出

0 1 1 0
*/
