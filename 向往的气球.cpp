/*
没考虑好数据范围，这两句代码坑死我啊....
#define maxx 10010
zb f[maxx][maxx]={0};
*/
#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef struct {
    int r;
    int c;
} zb;
zb a[10000];
zb f[1001][1001];
zb findx(zb x) {
    if(f[x.r][x.c].r==x.r&&f[x.r][x.c].c==x.c)
        return x;
    else
        return f[x.r][x.c]=findx(f[x.r][x.c]);
}
void merge(zb x,zb y) {
    zb fx,fy;
    fx=findx(x);
    fy=findx(y);
//  if(fx.r!=fy.r||fx.c!=fy.c)
//      f[fx.r][fx.c]=fy;
    if(fx.r==fy.r&&fx.c==fy.c)
    {
        return;
    }
    else
    {
        f[fx.r][fx.c]=fy;
    }
}
int cmp1(zb a,zb b) {
    return a.r<b.r;
}
int cmp2(zb a,zb b) {
    return a.c<b.c;
}
int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,k;
        cin>>n>>k;
        int cnt=0;
        memset(f,0,sizeof(f));
        int rr,cc;
        for(int i=0; i<n; i++) {         
            cin>>rr>>cc;
            a[i].r=rr;
            a[i].c=cc;
            f[rr][cc].r=rr;
            f[rr][cc].c=cc;
        }
        sort(a,a+n,cmp1);
        for(int i=0; i<n-1; i++) {
            if(a[i+1].r-a[i].r<=k)
                merge(a[i],a[i+1]);
        }
        sort(a,a+n,cmp2);
        for(int i=0; i<n-1; i++) {
            if(a[i+1].c-a[i].c<=k)
                merge(a[i],a[i+1]);
        }
        for(int i=1; i<=1000; i++) {
            for(int j=1; j<=1000; j++) {
                if(f[i][j].r==i&&f[i][j].c==j)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
/*
3282: 向往的气球
时间限制: 1 Sec  内存限制: 128 MB
提交: 128  解决: 30
[提交][状态][讨论版][命题人:acm4302]
题目描述
一年一度的计控ACM院赛即将来临。除了ACMers以外，志愿者们也非常的忙碌。他们需要将各种颜色的气球分配给A掉相应题目的队伍。现在，所有比赛队伍的成员都处在一个房间中，这个房间是一个二维坐标系，大小为1000行x1000列。
每一个坐标对应着空座位或某个参赛队伍。每一分钟，志愿者们都应该把所有的气球聚集在一起。志愿者将会被告知把气球送到哪里。为了保证工作的效率，对于两个坐标(x1,y1)和(x2,y2)，如果|x1-x2|不大于k 或者 |y1-y2|不大于k，则这两个坐标的气球由同一个志愿者配送。你能知道最少需要多少志愿者，才能配送完所有的气球吗？
输入
第一行包含一个整数T，表示有T组数据。
对于每一组数组，这里将有n+1行
第一行：输入两个整数n,k; n表示气球的数量，k表示题目中的k值
接下来的n行中，每一行包含两个整数r,c。表示气球应该被送往r行，c列。请注意坐标可能会相同。
题目中保证：T<=100,1<=n<=10000,1<=k,r,c<=1000
输出
对于每一组数据，你需要输出一行
输出最少需要的志愿者数量

样例输入

2
3 5
1 1
10 6
15 20
2 5
1 1
7 7

样例输出

1
2
*/
