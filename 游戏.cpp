/*本来准备分n的奇偶性讨论的，发现只是求排序后的中位数而已，
需要注意下先手玩家
*/ 
#include<iostream>
#include<algorithm>
bool cmp(int a,int b)
{
	return a>b;
}
using namespace std;
int main() {
	int n;
	int a[1010];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	cout<<a[n/2];
	return 0;
}
/*题目描述
两个玩家玩游戏。最初有n个整数  {a1，a2，，an} ,每轮一个玩家选择一个数字并从中删除，这一直持续到只剩下一个数字。第一个玩家希望留下的最后一个数字最小化，而第二个玩家想要最大化。你想知道在n–1次之后留下什么数字。

输入
第一行包含一个整数 n（1<=n <=1000）。
第二行包含n个整数。

输出
输出留下的一个数字
样例输入

3
2 2 2

样例输出

2
*/
