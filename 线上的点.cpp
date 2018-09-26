#include<iostream>
#include<algorithm>
using namespace std;
int max(int a,int b)
{
	return a>b? a:b;
}
int a[105];
int main()
{
int n,d;
cin>>n>>d;
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int ans=0,res;
for(int i=0;i<n;i++)
{
	res=1; //至少留下自己 
for(int j=i+1;j<n;j++)
{
	if(a[j]-a[i]<=d)
	res++;
}
ans=max(ans,res);	
}
cout<<n-ans<<endl;
return 0;
} 
/*题目描述
有n个整数和一个整数d(1?≤?n?≤?100,?0?≤?d?≤?100) ，现在要使得这n个数中任意两个数的差值不大于d,问至少要删除几个数。
输入
第一行：n,d 输入整数的个数以及n个整数之间的最大差值。
第二行：n个整数xi(1<=xi<=100)。

输出
至少要删除的数的个数。
样例输入

3 1
2 1 4

样例输出

1
*/
