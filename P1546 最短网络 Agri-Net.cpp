#include<bits/stdc++.h>
using namespace std;
#define maxn 10005
typedef struct{
    int x,y,w;
}MAP;
bool cmp(MAP a,MAP b)
{
    return a.w<b.w;
} 
MAP a[maxn];
int f[maxn];
int findx(int x)
{
    int r=x;
    while(f[r]!=r)
    r=f[r];
    return r;
}
int main()
{
int n;
cin>>n;
int k,m=0;
for(int i=1;i<=n;i++)
{
    f[i]=i;
    for(int j=1;j<=n;j++)
    {
        cin>>k;
        if(j>i)//避免重复 
        {
            m++;
            a[m].x=i;
            a[m].y=j;
            a[m].w=k;
        }
    }
}
sort(a+1,a+m+1,cmp);
int ans=0,p=0;
for(int i=1;i<=m;i++)
{
    if(findx(a[i].x)!=findx(a[i].y))
    {
        ans+=a[i].w;
        f[findx(a[i].x)]=a[i].y;
        p++;
        if(p==n-1)
        break;		
    }
}
cout<<ans<<endl;
return 0;	
} 
/*
题目背景

农民约翰被选为他们镇的镇长！他其中一个竞选承诺就是在镇上建立起互联网，并连接到所有的农场。当然，他需要你的帮助。
题目描述

约翰已经给他的农场安排了一条高速的网络线路，他想把这条线路共享给其他农场。为了用最小的消费，他想铺设最短的光纤去连接所有的农场。

你将得到一份各农场之间连接费用的列表，你必须找出能连接所有农场并所用光纤最短的方案。每两个农场间的距离不会超过100000
输入输出格式
输入格式：

第一行： 农场的个数，N（3<=N<=100）。

第二行..结尾: 后来的行包含了一个N*N的矩阵,表示每个农场之间的距离。理论上，他们是N行，每行由N个用空格分隔的数组成，实际上，他们限制在80个字符，因此，某些行会紧接着另一些行。当然，对角线将会是0，因为不会有线路从第i个农场到它本身。

输出格式：

只有一个输出，其中包含连接到每个农场的光纤的最小长度。

输入输出样例
输入样例#1： 

4
0 4 9 21
4 0 8 17
9 8 0 16
21 17 16 0

输出样例#1： 

28

*/
