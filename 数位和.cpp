/*
��Ŀ����
��λ�ͣ���ʮ�������ֵ�ÿһλ���ַֽ���ͣ�����123456����λ�� => 1+2+3+4+5+6=21
����
����������n,m  (1<=n<=100000,1<=m<=30)
���
һ������������1��n  ��λ���ܱ�m��������  �ĸ���
��������
12  3
�������
4
*/
#include<iostream>
using namespace std;
int fx(int n)//����λ�� 
{
	int sum=0;
		while(n)
		{
			sum+=n%10;
			n=n/10;
		}	
	return sum;
}
int main()
{
	int n,m;
	int cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		if(fx(i)%m==0)
		cnt++;
	}
	cout<<cnt;
	return 0;
}
