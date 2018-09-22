/*还是用并查集，不过一维写法也行，结构体中多定义一个p值即可，
真的挺巧妙的，可惜昨晚用一维数组写没想到这里
*/ 
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int T;
struct node{
    int x, y, p;
}a[10005];
int f[10005];
int n, k;
int cmp1(struct node a1, struct node a2){
    return a1.x<a2.x;
}
int cmp2(struct node a1, struct node a2){
    return a1.y<a2.y;
}
int find(int x){
    if(x==f[x])
        return x;
    return f[x]=find(f[x]);
}
int main()
{
    scanf("%d", &T);
    for(int z=0; z<T; z++)
    {
        scanf("%d%d", &n, &k);
        for(int k=0; k<n; k++)
        {
            scanf("%d%d", &a[k].x, &a[k].y);
            a[k].p=k;
        }
        for(int i=0; i<n; i++)
            f[i]=i;
        sort(a, a+n, cmp1);
        for(int i=1; i<n; i++)
        {
            if(a[i].x-a[i-1].x<=k)
                f[find(a[i].p)]=find(a[i-1].p);
        }
         
         
        sort(a, a+n, cmp2);
        for(int i=1; i<n; i++)
        {
            if(a[i].y-a[i-1].y<=k)
                f[find(a[i].p)]=find(a[i-1].p);
        }
         
        int cnt=0;
        for(int i=0; i<n; i++)
            if(f[i]==i)
                cnt++;
        printf("%d\n", cnt);
    }
    return 0;   
}

