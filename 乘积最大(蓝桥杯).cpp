#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define maxx 100010
#define mod 1000000009 
#define ll long long 
ll a[maxx];
int flag;//����Ƿ��������
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
				sum1=a[i]*a[i+1];//���������
				sum2=a[n-j-1]*a[n-j-2];//����
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
���⣺�˻����

����N������A1, A2, ... AN���������ѡ��K������ʹ��˻����  

����������ĳ˻������ڳ˻����ܳ������ͷ�Χ����ֻ������˻�����1000000009��������  

ע�⣬���X<0�� ���Ƕ���X����1000000009�������Ǹ�(-X)����1000000009��������
����0-((0-x) % 1000000009)

�������ʽ��
��һ�а�����������N��K��  
����N��ÿ��һ������Ai��  

����40%�����ݣ�1 <= K <= N <= 100  
����60%�����ݣ�1 <= K <= 1000  
����100%�����ݣ�1 <= K <= N <= 100000  -100000 <= Ai <= 100000  

�������ʽ��
һ����������ʾ�𰸡�


������������
5 3 
-100000   
-10000   
2   
100000  
10000  

�����������
999100009

�����磺
������������
5 3 
-100000   
-100000   
-2   
-100000  
-100000

�����������
-999999829
*/
