/*
û���Ǻ����ݷ�Χ���������������Ұ�....
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
3282: ����������
ʱ������: 1 Sec  �ڴ�����: 128 MB
�ύ: 128  ���: 30
[�ύ][״̬][���۰�][������:acm4302]
��Ŀ����
һ��һ�ȵļƿ�ACMԺ���������١�����ACMers���⣬־Ը����Ҳ�ǳ���æµ��������Ҫ��������ɫ����������A����Ӧ��Ŀ�Ķ��顣���ڣ����б�������ĳ�Ա������һ�������У����������һ����ά����ϵ����СΪ1000��x1000�С�
ÿһ�������Ӧ�ſ���λ��ĳ���������顣ÿһ���ӣ�־Ը���Ƕ�Ӧ�ð����е�����ۼ���һ��־Ը�߽��ᱻ��֪�������͵����Ϊ�˱�֤������Ч�ʣ�������������(x1,y1)��(x2,y2)�����|x1-x2|������k ���� |y1-y2|������k���������������������ͬһ��־Ը�����͡�����֪��������Ҫ����־Ը�ߣ��������������е�������
����
��һ�а���һ������T����ʾ��T�����ݡ�
����ÿһ�����飬���ｫ��n+1��
��һ�У�������������n,k; n��ʾ�����������k��ʾ��Ŀ�е�kֵ
��������n���У�ÿһ�а�����������r,c����ʾ����Ӧ�ñ�����r�У�c�С���ע��������ܻ���ͬ��
��Ŀ�б�֤��T<=100,1<=n<=10000,1<=k,r,c<=1000
���
����ÿһ�����ݣ�����Ҫ���һ��
���������Ҫ��־Ը������

��������

2
3 5
1 1
10 6
15 20
2 5
1 1
7 7

�������

1
2
*/
