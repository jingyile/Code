/*���⣬����ӳ����*/ 
#include<bits/stdc++.h>
using namespace std;
map<char,int>p;
int main()
{
	int n,sum;
	p['a']=p['b']=p['d']=p['e']=p['g']=p['o']=p['p']=p['q']=1;
	p['A']=p['D']=p['O']=p['P']=p['Q']=p['R']=1;
	p['B']=2;
	char a[1010];
	int t;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>a;
		n=strlen(a);
		for(int i=0;i<n;i++)
		{
			sum+=p[a[i]];
		}
		cout<<sum<<endl;
	}
	return 0;
}
/*
��Ŀ����

�������ˣ������ϼ��Խ���ؿ����į���������뵽һ���취������ ΪֻҪ��Ӣ����ĸ�ϵĶ���Ϳ����������еĿն���������һ���ַ���������ϼ����ҪͿ�����������磺a��ҪͿһ�Σ�k����ҪͿ��B��Ҫ��2�Ρ��ṩ�� ����abcdefghijklmnopqrstuvwxyz,ABCDEFGHIJKLMNOPQRSTUVWXYZ
����

��һ����һ��������t��������t���ַ����� 

����ȥt�У�ÿ����һ���ַ���������<=1000���ַ�����ֻ��a-z,A
���

 ����ÿ���ַ������ϼ����ҪͿѻ�Ĵ�����
��������

2
abcg
ABCD

�������

3
4
*/

