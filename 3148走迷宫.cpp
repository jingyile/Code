#include <stdio.h>
#define MAXN 5
using namespace std;
int arr[MAXN][MAXN];
int frontt=0,rear=1;//队列头和尾
struct node//设置节点属性
{
    int x;//横坐标
    int y;//纵坐标
    int pre;//用来表示每个元节点的前一个节点的下标，保存路径
}q[100];
int dx[4]={1,-1,0,0};//X方向上向左或者向右
int dy[4]={0,0,-1,1};//Y方向上向下或者向上
void print(int i)//处理输出结果，倒序输出
{
    if(q[i].pre!=-1)
    {
        print(q[i].pre);
        printf("(%d, %d)\n",q[i].x,q[i].y);
    }
}
void BFS(int x,int y)//广度优先搜索
{
    q[frontt].x=x;      //队列中的第一个元素的x坐标
    q[frontt].y=y;      //队列中的第一个元素的y坐标
    q[frontt].pre=-1;    //当前队列中的元素的前一个元素的下表此处没有前一个故设置为-1
    while(frontt<rear)//队列中存在元素
    {
        for(int i=0;i<4;i++)
        {
            int a,b;
            a=q[frontt].x+dx[i];
            b=q[frontt].y+dy[i];
            if(a<0||a>=5||b<0||b>=5||arr[a][b])//是否越界
                continue;
            else
            {
                arr[a][b]=1;//已走过
                q[rear].x=a;
                q[rear].y=b;
                q[rear].pre=frontt;
                rear++;//入队
            }
            if(a==4&&b==4)//输出标记过的元素
                print(frontt);
        }
        frontt++;//出队
    }
}
int main()
{
 
    for(int i=0;i<MAXN;i++)
    {
        for(int j=0;j<MAXN;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("(0, 0)\n");
    BFS(0,0);
    printf("(4, 4)\n");
    return 0;
}
/*3148: 搜索基础之迷宫问题
时间限制: 1 Sec  内存限制: 128 MB
提交: 49  解决: 24
[提交][状态][讨论版][命题人:lyh]
题目描述


定义一个二维数组：

int maze[5][5] = {

 

0, 1, 0, 0, 0,

 

0, 1, 0, 1, 0,

 

0, 0, 0, 0, 0,

 

0, 1, 1, 1, 0,

 

0, 0, 0, 1, 0,

 

};

它表示一个迷宫，其中的1表示墙壁，0表示可以走的路，只能横着走或竖着走，不能斜着走，要求编程序找出从左上角到右下角的最短路线。

输入

一个5 × 5的二维数组，表示一个迷宫。数据保证有唯一解。
输出

左上角到右下角的最短路径，格式如样例所示。
样例输入

0 1 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 1 1 0
0 0 0 1 0

样例输出

(0, 0)
(1, 0)
(2, 0)
(2, 1)
(2, 2)
(2, 3)
(2, 4)
(3, 4)
(4, 4)
*/
