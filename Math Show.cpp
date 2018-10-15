#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	long long m;
	int a[50];
	int sum=0;//完成一组任务所需时间 
	cin>>n>>k>>m;
	for(int i=0;i<k;i++)
	{
	cin>>a[i];
	sum+=a[i];	
	}
	sort(a,a+k);//排序!!! 
	long long time,ans;
	long long res=-0x7fffffffffffffff;
	for(int i=0;i<=n;i++)
	{
		time=m-i*sum;//剩余时间 
		if(time<0)
		break;
		ans=i*(k+1);//得分 
		for(int j=0;j<k;j++)
		{
			if(time>=(n-i)*a[j])//剩下的n-i个小任务，从小到大依次完成 
			{
				time-=(n-i)*a[j];
				ans+=(n-i);
			}
			else//不足以完成n-i个，能完成几个完成几个 
			{
				ans+=(time/a[j]);
				break;
			}
		}
		res=max(res,ans);
	}
	cout<<res;
	return 0;
}
/*题目描述

Polycarp参加数学展。他被赋予n个任务，每个任务由k个子任务组成，编号为1到k。他花了tj分钟来解决任何任务的第j个子任务。因此，解决子任务所需的时间仅取决于其索引，而不取决于任务本身。Polycarp可以按任何顺序解决子任务。  
解决了任意问题的子任务，他都能获得了一分。因此，任务的点数等于其中已解决的子任务的数量。此外，如果Polycarp完全解决了某个任务（解决了所有k个子任务），他会收到一个额外的点数。因此，他完整解决某个任务获得的总点数是k+1。 
  
Polycarp有M分钟的时间。他可以获得的最高分数是多少？ 

 


输入

第一行包含三个整数n,k,和M（1≤n≤45，1≤k≤45，0≤M≤2·10^9）。

第二行包含?整数数字，值tj（1≤tj≤?1000000），其中tj是解决第j个子任务需要时间tj。
输出

打印Polycarp可以在M分钟内获得的最大分数。
样例输入

2 4 11
1 2 3 4

样例输出

6
*/
