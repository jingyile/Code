/*
题目描述
对于n个数，从中取出m个数，如何取使得这m个数的乘积最大呢？
输入
第一行一个数 代表数据组数
每组数据共两行
第一行两个正整数n、m， n,m<=20
第二行给出n个整数，其中每个数的绝对值小于4
输出
每组数据输出1行，为最大的乘积
样例输入
1
5 5
1 2 3 4 2
样例输出
48
*/
/*最大的坑，输入全是负数的情况 如-5 -8 -9 -2 -1*/ 
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define maxx 100
int a[maxx];
int flag;//标记是否存在正数
int cmp(int a,int b) {
	return a>b;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		memset(a,0,sizeof(a));
		flag=0;
		int m,n;
		cin>>n>>m;
		for(int i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		if(a[0]>0)
			flag=1;
		long long sum=1;
		int i=0,j=0,sum1,sum2;
		if(flag) {
			while(m) {
				sum1=a[i]*a[i+1];//最大两正数
				sum2=a[n-j-1]*a[n-j-2];//负数
				if(sum2>=sum1&&m>=2) {
					sum*=sum2;
					j+=2;
					m-=2;
				} else {
					sum*=a[i];
					i++;
					m--;
				}
			}

		} else {
			for(int i=0; i<m; i++)
				sum*=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
