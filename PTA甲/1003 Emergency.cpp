/*����˼·��n������m��·��ÿ�������о�ԮС�飬
���еıߵı�Ȩ��֪�����������յ㣬�����㵽�յ�����·������
�Լ����·���ϵľ�ԮС����Ŀ֮�͡�����ж����������Ȩ�����о�ԮС����Ŀ�������Ǹ�
�Ͽ�˹�����㷨��ʹ�ã�ע�����num��w���� 
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
	//��ʼ�� 
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
		e[i][j]=0;
		else
		e[i][j]=inf;
	}
	//�����
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&t1,&t2,&t3);
		e[t1][t2]=e[t2][t1]=t3;
	}
	//��ʼ��
	for(int i=0;i<n;i++)
	dis[i]=e[c1][i];
    w[c1] = weight[c1];
    num[c1] = 1;
	//����
	for(i=0;i<n;i++)
	{
		min=inf;
		u=-1;
		for(j=0;j<n;j++)
		{
			if(!vis[j]&&dis[j]<min)
			{
				min=dis[j];
				u=j;//�����뵽���� 
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
 

