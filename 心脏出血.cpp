#include<bits/stdc++.h>
using namespace std;
char s[15];
int nc[10005]; 
int main()
{
	int t,m,p;
	cin>>t>>m;
	int id=0;
	int maxn,maxn0,start=m;
	memset(nc,0,sizeof(nc));
	while(t--)
	{
	cin>>s;
	if(strcmp(s,"alloc")==0)//malloc
	{
		maxn=0,maxn0=0;
		cin>>p;
	for(int i=m;i>0;i--)
	{
		if(nc[i]==0)
		maxn0++;
		if(maxn<maxn0)
		{
		maxn=maxn0;
		start=i;	
		}
		if(nc[i]==0&&nc[i+1]!=0)
		{
			maxn0=1;
		}
	}
	if(maxn>=p)
	{
	id++;
	cout<<id<<endl;
	for(int i=start;i<start+p;i++)
	{
		nc[i]=id;	
	}	
	}
	else{
		cout<<"NULL"<<endl;
	}
	}
	if(strcmp(s,"erase")==0)//erase
	{
		int flag=1;
		cin>>p;
		for(int i=1;i<=m;i++)
		{
			if(nc[i]==p)
			{
			nc[i]=0;
			flag=0;	
			}
		}
		if(flag||p==0||p>id)//!!!
		cout<<"ILLEGAL_ERASE_ARGUMENT"<<endl;
	}
	if(strcmp(s,"defragment")==0)
	{
		for(int i=m;i>=1;i--)
		for(int j=m;j>1;j--)
		{
			if(nc[j]!=0&&nc[j-1]==0)
			{
				nc[j-1]=nc[j];
				nc[j]=0;
			}
		}
	}
//	for(int i=0;i<m;i++)
//	cout<<nc[i]<<" ";
	}
	return 0; 
}
/*
��Ŀ����

2014��4�£�һ����Դ���ܿ�OpenSSL������©���������Ѫ����Heartbleed������¶�������ڴ����Ĵ������������û���˽��ѪҺ��ӿ����
����

������������Ϣ��ϼ������о���

�ڴ�������Ҫ�ԣ�������Ϊ�Լ������һ���ڴ���������ϣ������ڴ��������ܹ�֧���������ֲ�����

1.alloc n �C ����n�ֽڵ������ڴ棬�������������ڴ���id��

2.erase x �C �ͷ�idΪx���ڴ�飻

3.defragment �C ���ڴ������Ƭ����

ϼ��ӵ�г���Ϊm�ֽڵ��ڴ棬��Ȼ����ϣ�������ڴ���������֡������Ѫ��������©������������������������������ϸ��Ҫ��

1.��һ��ɹ�������ڴ��idΪ1���ڶ���Ϊ2���Դ����ƣ�

2.ִ��alloc���������̵��ڴ����������

�ģ�����ж�������һ�������ڴ�飬ѡ���ǰ���ǿ������䡣������ܷ��������С�����������ڴ�飬�����NULL��

3.erase�����ͷ�����ڴ��������ʹ�ã����Ҫ��

�ŵ�

�ڴ�����ڴ���û���ҵ����򷵻�ILLEGAL_ERASE_ARGUMENT���������ɹ�������κζ�����

4.defragment������ʹ�����ڴ澡����ǰ����������������ԭ����˳�򡣸ò���������κζ�����

ϼ����ϲ���а�ȫ�е����ˣ����ܲ��ܰ���ʵ������ڴ�������Ӯ�����ķ����ء�
Input

 ��һ�а�����������t��m��1<=t<=100;1<=m<=100�����ֱ�������t�β����Լ��ڴ�Ĵ�СΪm�ֽڡ� 
��������t�зֱ���t�β���������������� 

1. alloc n��1<=n<=100����n���������� 

2. erase x��x�������32λ������ 

3. defragment������
����

������в���ʱ������������Ϣ��ÿ�����ռһ�С�
���

������в���ʱ������������Ϣ��ÿ�����ռһ�С�

��������

6 10 
alloc 5
alloc 3
erase 1
alloc 6
defragment
alloc 6

�������

1
2
NULL
3
*/
