#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
char mmap[105][105];
int dir[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
typedef struct Node
{
    int x;
    int y;
    int step;
}node;
int ans;
node start,now,next;
queue<node>q;//结
void check()
{
    if(mmap[next.x][next.y] == '.')
    {
        q.push(next);
        mmap[next.x][next.y] = '*';
    }
    if(mmap[next.x][next.y] == 'x')
    {
        q.push(next);
    }
}
void bfs()
{
    q.push(start);
    while(!q.empty())
    {
        now = q.front();
        if(mmap[now.x][now.y] == 'x')
        {
            ans = now.step;
            return;
        }
        for(int i = 0;i<8;i++)
        {
            next.x = now.x+dir[i][0];
            next.y = now.y+dir[i][1];
            if(dir[i][0] && dir[i][1])
                next.step = now.step+141;
            else
                next.step = now.step+100;
            check();
        }
        q.pop();
    }
    ans = -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;
    while(t--)
    {
        memset(mmap,0,sizeof(0));
        while(!q.empty())
        {
            q.pop();
        }
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mmap[i][j];
                if(mmap[i][j] == 'o')
                {
                    start.x = i;
                    start.y = j;
                    start.step = 0;
                }
            }
        }
        bfs();
        printf("%d\n",ans);
    }
    return 0;
}
