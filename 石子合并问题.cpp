#include<iostream>
#include<cstring>
using namespace std;
int f[101][101];//f[i][j]��ʾ�ӵ�i��ʯͷ�ϲ�����j��ʯͷ��С�÷�
int g[101][101];
int s[101];//s[i]��ʾǰi��ʯͷ�������ܺ�
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
    for(int i=n-1;i>=1;i--)//�ӵ�i�ѵ���j�ѣ�j>i,�ɺ���ǰ���кϲ�
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<=j-1;k++)//k��ʾ���һ�κϲ�ʱ�������ѽ��кϲ������ѣ�f[i][k],f[k+1][j](i<=k<=j-1)
            {
                f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);//s[j]-s[i-1]��ʾ���һ�κϲ��ĵ÷�
            }
        }
    }
    cout<<f[1][n]<<endl;
        for(int i=n-1;i>=1;i--)//�ӵ�i�ѵ���j�ѣ�j>i,�ɺ���ǰ���кϲ�
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<=j-1;k++)//k��ʾ���һ�κϲ�ʱ�������ѽ��кϲ������ѣ�f[i][k],f[k+1][j](i<=k<=j-1)
            {
                g[i][j]=max(g[i][j],g[i][k]+g[k+1][j]+s[j]-s[i-1]);//s[j]-s[i-1]��ʾ���һ�κϲ��ĵ÷�
            }
        }
    }
    cout<<g[1][n]<<endl;
    return 0;
}
