#include<iostream>
using namespace std;
#define ll long long
int main() {
	int t;
	ll x,s;
	cin>>t>>s>>x;
	if(t>x)
		cout<<"NO";
	if(t==x)
		cout<<"YES";
	if(t<x) {
		bool a=(x-t)%s==0;
		bool b=(x-t)%s==1;
		bool c=(x-t)!=1;
		if(a||b&&c)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}
/*
��Ŀ����

̩����һ�����ܡ����ֲ����ܹ���ţȮһ���ͽУ���ʱ��t������Ϊ��λ��������һ�ηͽС�Ȼ��ÿ��s�������1��ļ���ͽ����Ρ��������ʱ��t��t + s��t + s + 1��t + 2 s��t + 2 s + 1��ʱ�ͽС�

Barney����������Ҫ�Բ��ܣ����ǵ����ͽ�ʱ�����ܳԡ�Barney�ƻ���ʱ��x������Ϊ��λ�������������������������ʱ�Ƿ��ͽС�
����

һ�а�������������t,s,x��0<=t,x<=10^9,2<=s<=10^9��
���

���������ʱ��x�ͽ�,��ӡ��YES���������ӡ��NO".
��������

3 10 4

�������

NO
*/
