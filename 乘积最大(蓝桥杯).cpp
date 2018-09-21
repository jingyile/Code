#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define maxx 100010
#define mod 1000000009 
#define ll long long 
ll a[maxx];
int flag;//标记是否存在正数
ll cmp(ll a,ll b) {
	return a>b;
}
int main() { {
		memset(a,0,sizeof(a));
		flag=0;
		int m,n;
		cin>>n>>m;
		for(int i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		if(a[0]>0)
			flag=1;
		ll sum=1;
		int i=0,j=0;
		ll sum1,sum2;
		if(flag) {
			while(m) {
				sum1=a[i]*a[i+1];//最大两正数
				sum2=a[n-j-1]*a[n-j-2];//负数
				if(sum2>=sum1&&m>=2) {
					sum*=sum2;
			if(sum>=0&&sum>=mod)
		         sum=sum%mod;
					j+=2;
					m-=2;
				} else {
					sum*=a[i];
			if(sum>=0&&sum>=mod)
		         sum=sum%mod;
					i++;
					m--;
				}
			}

		} else {
			for(int i=0; i<m; i++)
			{	 
				sum*=a[i];
		if(sum<0&&sum<mod*-1)
		sum=sum%mod;
		}
} 
		cout<<sum<<endl;
	}
	return 0;
}
/*
标题：乘积最大

给定N个整数A1, A2, ... AN。请你从中选出K个数，使其乘积最大。  

请你求出最大的乘积，由于乘积可能超出整型范围，你只需输出乘积除以1000000009的余数。  

注意，如果X<0， 我们定义X除以1000000009的余数是负(-X)除以1000000009的余数。
即：0-((0-x) % 1000000009)

【输入格式】
第一行包含两个整数N和K。  
以下N行每行一个整数Ai。  

对于40%的数据，1 <= K <= N <= 100  
对于60%的数据，1 <= K <= 1000  
对于100%的数据，1 <= K <= N <= 100000  -100000 <= Ai <= 100000  

【输出格式】
一个整数，表示答案。


【输入样例】
5 3 
-100000   
-10000   
2   
100000  
10000  

【输出样例】
999100009

再例如：
【输入样例】
5 3 
-100000   
-100000   
-2   
-100000  
-100000

【输出样例】
-999999829
*/
