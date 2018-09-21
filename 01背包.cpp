#include <iostream>
#include <memory.h>
using namespace std;
struct wupin
{
    int v;//体积
    int w;//价值
}a[10000];
int dp[100000];
int main()
{
    int n,m;
    cin>>m>>n;
    memset(dp,0,sizeof(dp));
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
        cin>>a[i].v>>a[i].w;
    for(int i=0;i<n;i++)
        for(int j=m;j>=a[i].v;j--)
            dp[j]=max(dp[j],dp[j-a[i].v]+a[i].w);
    cout << dp[m] << endl;
    return 0;
}
