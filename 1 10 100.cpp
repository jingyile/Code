/*题目描述
1,10,100,1000...组成序列1101001000...，求这个序列的第N位是0还是1（自左向右）。
输入
第一行一个整数T，表示数组组数
后面T行，每行一个整数N  (N<=10^9)
输出
共T行，如果该位是0，输出0;如果该位是1，输出1
*/
/*分析：很容易看得出1所在的位数是有规律的，打表记录下所有1的所在位置，查表*/ 
#include<iostream>
using namespace std;
#define M 10010
int a[M];
int flag=0;//标记是否找到 
int main()
{
	a[0]=1;
	for(int i=1;i<M;i++)
	{
		a[i]=a[i-1]+i;//打表 
	}
	int T;
	cin>>T;
	while(T--)
	{
		flag=0;
		int n;
		cin>>n;
		for(int i=0;i<M;i++)
		{
			if(n==a[i])
			flag=1;
		}
		if(flag==1)
		cout<<1<<endl;
		else
		cout<<0<<endl; 
	}
	return 0;
}

