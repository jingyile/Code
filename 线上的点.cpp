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
	res=1; //���������Լ� 
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
/*��Ŀ����
��n��������һ������d(1?��?n?��?100,?0?��?d?��?100) ������Ҫʹ����n�����������������Ĳ�ֵ������d,������Ҫɾ����������
����
��һ�У�n,d ���������ĸ����Լ�n������֮�������ֵ��
�ڶ��У�n������xi(1<=xi<=100)��

���
����Ҫɾ�������ĸ�����
��������

3 1
2 1 4

�������

1
*/
