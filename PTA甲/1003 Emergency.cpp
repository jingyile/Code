/*大体思路：n个城市m条路，每个城市有救援小组，
所有的边的边权已知。给定起点和终点，求从起点到终点的最短路径条数
以及最短路径上的救援小组数目之和。如果有多条就输出点权（城市救援小组数目）最大的那个
迪克斯特拉算法的使用，注意更新num和w即可 
*/
#include<stdio.h>
#define maxn 500
int e[maxn][maxn],dis[maxn];
int weight[maxn],w[maxn],num[maxn];
bool vis[maxn];
int main()
{ 
	int i,j,n,m,t1,t2,t3,u,v,min;
	int c1,c2;
	int inf=9999999;
	scanf("%d %d %d %d",&n,&m,&c1,&c2);
	for(i = 0; i < n; i++)
    scanf("%d", &weight[i]);
	//初始化 
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
		e[i][j]=0;
		else
		e[i][j]=inf;
	}
	//读入边
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&t1,&t2,&t3);
		e[t1][t2]=e[t2][t1]=t3;
	}
	//初始化
	for(int i=0;i<n;i++)
	dis[i]=e[c1][i];
    w[c1] = weight[c1];
    num[c1] = 1;
	//核心
	for(i=0;i<n;i++)
	{
		min=inf;
		u=-1;
		for(j=0;j<n;j++)
		{
			if(!vis[j]&&dis[j]<min)
			{
				min=dis[j];
				u=j;//待加入到集合 
			}
		}
		if(u==-1)
		break;
		vis[u] = true;
	    for(v = 0; v < n; v++) {
        if(vis[v] == false && e[u][v] != inf) {
                if(dis[u] + e[u][v] < dis[v]) {
                    dis[v] = dis[u] + e[u][v];
                    num[v] = num[u];
                    w[v] = w[u] + weight[v];
                } else if(dis[u] + e[u][v] == dis[v]) {
                    num[v] = num[v] + num[u];
                    if(w[u] + weight[v] > w[v])
                        w[v] = w[u] + weight[v];
                }
            }
        }
	 }
	 printf("%d %d",num[c2], w[c2]); 	 
	return 0; 
 }
 

