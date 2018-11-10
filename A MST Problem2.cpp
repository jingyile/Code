#include<bits/stdc++.h>
using namespace std;
#define maxn 35
#define INF 999999
double graph[maxn][maxn];//邻接矩阵
double dist[maxn];//距离
bool vis[maxn];
typedef struct{
	int x;
	int y;
	int z;
}ZB;
ZB a[maxn];
int N;
double prim()
{
	int pos=1;
	double ans,Min;
	memset(vis,0,sizeof(vis));
	ans=0;
	for(int i=1;i<=N;i++)
	{
		dist[i]=graph[pos][i];//与pos邻接点的距离
	}
	vis[pos]=1;
	for(int i=2;i<=N;i++)
	{
		Min=INF;
		pos=-1;
		for(int j=1;j<=N;j++)
		{
			if(!vis[j]&&Min>dist[j])
			{
				Min=dist[j];
				pos=j;
			}
		}
			if(pos==-1)
			return -1;
			vis[pos]=1;
			ans+=Min;
			for(int j=1;j<=N;j++)
			{
				if(!vis[j]&&dist[j]>graph[pos][j])//执行更新，如果点距离当前点的距离更近，就更新dist
				dist[j]=graph[pos][j];
			}
	}
	return ans;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		N=n;
		for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
		{
			graph[i][j]=INF;//初始化均不可达
		}
		for(int i=1; i<=n; i++) {
			cin>>a[i].x>>a[i].y>>a[i].z;
		}
		double len;
		for(int i=1; i<=n; i++) {
			for(int j=i+1; j<=n; j++) {
				len=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
				graph[i][j]=graph[j][i]=len;//构造邻接矩阵
			}
		}
    printf("%.2lf\n",prim());
	}
	return 0;
}

