#include<bits/stdc++.h>
using namespace std;
const int maxn=10e5; 
typedef struct
{
	int s;
	int v;
}SV;
SV a[maxn+10],b[maxn+10];
int main()
{
	int n;
	while(cin>>n)
	{
	for(int i=0;i<n;i++)
	cin>>a[i].s>>a[i].v;
	for(int i=0;i<n;i++)
	cin>>b[i].s>>b[i].v;
	int ans=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(b[i].s<a[j].s&&b[i].v>a[j].v)
		ans++;
		ans%=2012;
	}
	cout<<ans%2012<<endl;
}
	return 0;
}
/*
题目描述

大家还记得龟兔赛跑的故事吗？兔子输给了乌龟，但是他一直都不服气，想要一雪前耻。他把他的族人全部都带来了海边，要与乌龟一族一比高下。嚣张的兔子们，给了乌龟一个月的时间来准备这场”世纪大战”。如临大敌的乌龟们每天没日没夜的锻炼，在高帅富Bearboy的帮助下，乌龟的速度再也不是以前那样了，完全有能力和兔子抗衡。为了比赛的结果更权威，这次兔子提出，要N只兔子和N只乌龟在同一条跑道上同时进行比赛。

嚣张的兔子让乌龟们自己在跑道上选择自己起跑的起点（不一定是跑道的0点），同时让乌龟为这N只兔子规定他们的起点。跑道长度保证所有的超越都可以完成，比赛积分计算如下：

       1：x只乌龟同时超过一只兔子   乌龟一族 加x 分

       2：x只兔子同时超过一只乌龟   兔子一族 加x分

       3：x只乌龟同时超过y只兔子   乌龟一族 加x*y分

       4：x只兔子同时超过y只乌龟   兔子一族 加x*y分

问最后谁的分最高。
输入

输入有多组测试数据。每组测试数据第一行是一个整数N（1<=N<=100000），表示兔子和乌龟的数量（都为N）。接下来有2*N行数据，每行有两个数字Si ， Vi（Si表示第i只乌龟/兔子的初始位置（跑道起点为0），Vi(1<=Vi<=100000)表示第i只乌龟/兔子的匀速前行的速度）第2行到N+1行是N只兔子的信息，第N+2行到2*N+1行是N只乌龟的信息。（所有的Si互不相等）
输出

输出乌龟所得的分数（由于结果会很大，所以结果对2012取余数）
样例输入

3
3 5
7 6
8 2
1 7
2 6
5 8
2
4 2
5 2
3 4
2 4

样例输出

7
4
*/
