#include<iostream>
#include<cstring>
using namespace std;
int f[101][101];//f[i][j]表示从第i堆石头合并到第j堆石头最小得分
int g[101][101];
int s[101];//s[i]表示前i堆石头的数量总和
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s[i]=s[i-1]+x;/
    }
    memset(f,0x3f,sizeof(f));
    for(int i=1;i<=n;i++)
        f[i][i]=0;
    for(int i=n-1;i>=1;i--)//从第i堆到第j堆，j>i,由后往前进行合并
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<=j-1;k++)//k表示最后一次合并时是哪两堆进行合并，两堆：f[i][k],f[k+1][j](i<=k<=j-1)
            {
                f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);//s[j]-s[i-1]表示最后一次合并的得分
            }
        }
    }
    cout<<f[1][n]<<endl;
        for(int i=n-1;i>=1;i--)//从第i堆到第j堆，j>i,由后往前进行合并
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<=j-1;k++)//k表示最后一次合并时是哪两堆进行合并，两堆：f[i][k],f[k+1][j](i<=k<=j-1)
            {
                g[i][j]=max(g[i][j],g[i][k]+g[k+1][j]+s[j]-s[i-1]);//s[j]-s[i-1]表示最后一次合并的得分
            }
        }
    }
    cout<<g[1][n]<<endl;
    return 0;
}
