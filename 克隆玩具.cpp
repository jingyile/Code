/*特殊情况一定要仔细考虑！*/ 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int flag=0;
int n,m;
cin>>n>>m;
if(n>0&&m==0)
{
	cout<<"No";
	return 0;
}
else if(m-n>1)
	flag=0;
else if((n-m+1)%2==0) 
{
	flag=1;
}
if(flag)
cout<<"Yes";
else
cout<<"No";
return 0;	
} 
/*题目描述
你只有一个A类型玩具，现在有个有两种功能的机器：
1. 加工一个A类型的玩具能够再得到一个A类型的玩具和一个B类型的玩具。
2. 加工一个B类型的玩具，能得到两个B类型的玩具。
问经过多次加工之后，能否恰好得到n个B类型的玩具和m个A类型的玩具（不能扔掉任何玩具哦）。

输入
两个整数n,m（0<=n,m<=1e9）加工之后B类型玩具的数量和A类型玩具的数量。
输出
能恰好得到n个B类型的玩具和m个A类型的玩具的话输出：Yes 
不能的话输出：No
样例输入

6 3

样例输出

Yes

提示

样例中，用两次功能1，得到三个A类玩具和两个B类玩具；再使用两次功能2，再得到4个B类玩具，这样就一共得到了6个玩具B和3个玩具A。
*/
