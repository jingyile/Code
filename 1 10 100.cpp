/*��Ŀ����
1,10,100,1000...�������1101001000...����������еĵ�Nλ��0����1���������ң���
����
��һ��һ������T����ʾ��������
����T�У�ÿ��һ������N  (N<=10^9)
���
��T�У������λ��0�����0;�����λ��1�����1
*/
/*�����������׿��ó�1���ڵ�λ�����й��ɵģ�����¼������1������λ�ã����*/ 
#include<iostream>
using namespace std;
#define M 10010
int a[M];
int flag=0;//����Ƿ��ҵ� 
int main()
{
	a[0]=1;
	for(int i=1;i<M;i++)
	{
		a[i]=a[i-1]+i;//��� 
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

