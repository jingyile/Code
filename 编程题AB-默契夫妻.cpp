#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[15],b[15];
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n; i++) {
		cin>>b[i];
	}
	int minn=999999;
	for(int i=0; i<n; i++) {
		int x=fabs(a[i]-b[i]);
		minn=min(minn,x);
	}
	cout<<minn<<endl;
	return 0;
}
/*
��Ŀ����

ĳ������˾��һ������������������n�Է��޲μӾ��ģ����޷ֱ���ۣ�
ͬһ�Է��޳�����ӽ��Ļ�øû����۸��Ϊ������n<10
����

��һ�� n
�ڶ��� n���ɷ�ĳ���
������ n�����ӵĳ���

���

�����С���۲�(>=0)
��������

5
1000 900  800  1200 1500
1200 1000 700  1100 1200

�������

100*/
