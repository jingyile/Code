#include<bits/stdc++.h>
#define Tortoise 1
#define Rabbit   2
using namespace std;
struct type
{
    int s,v,kind;
} Racer[100000];
int n;
bool cmp(type a,type b)
{
    return a.s>b.s;
}
int rabNum[100001];
int lowbit(int x)
{
    return x&(-x);
}
long long int getNum(int x)
{
    long long int sum=0;
    for(; x>0; x-=lowbit(x))
        sum+=rabNum[x];
    return sum;
}
void addVal(int x,int val)
{
    for(; x<=100000; x+=lowbit(x))
        rabNum[x]+=val;
}
int main()
{
    long long int ans;
    while(cin>>n)
    {
        ans=0;
        memset(rabNum,0,sizeof(rabNum));
        for(int i=0; i<n; ++i)
        {
            cin>>Racer[i].s>>Racer[i].v;
            Racer[i].kind=Rabbit;
        }
        for(int i=n; i<(n<<1); ++i)
        {
            cin>>Racer[i].s>>Racer[i].v;
            Racer[i].kind=Tortoise;
        }
        sort(Racer,Racer+(n<<1),cmp);
        for(int i=0; i<(n<<1); ++i)
        {
            if(Racer[i].kind==Rabbit)
                addVal(Racer[i].v,1);
            else if(Racer[i].kind==Tortoise)
                ans=(ans+getNum(Racer[i].v-1))%2012;
        }
        cout<<ans<<endl;
    }
    return 0;
}





