/*��һ��д����ʱ����Щ���⣬ˣ��С����AC���ˣ�����Ϊ������������
����ѧ�����۷���������ʱû��ȥ����һ��ˮ�ܣ����Σ�*/ 
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 100000
int s[maxn+10];
int vis[maxn+10];
int cnt,S=0,x;
inline void fx(int n,int a) {
	S=0;
	for(int i=0; i<n; i++) {
		if(!vis[i]) {
			S+=s[i];
		}
	}
	if(S>0)
	{
		x=(s[0]*a)/S;	
	}

}
bool cmp(int a,int b) {
	return a>b;
}
int main() {
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	memset(vis,0,sizeof(vis));
	fx(n,a);
	//cout<<"S"<<S<<endl<<"X"<<x<<endl;
	sort(s+1,s+n,cmp);
	for(int i=0; i<n; i++) {
		if(x>=b) {
			cout<<i;
			break;
		}
		vis[i+1]=1;
		fx(n,a);
	//	cout<<"S"<<S<<endl<<"X"<<x<<endl;
	}
	return 0;
}
/*��Ŀ����
��n����ˮ�ڣ���i����ˮ�ڵĳ�ˮ��Ϊsi������ˮ�ڼ���A��ˮ�����������ٶµ����ٳ�ˮ�ڲ���ʹ��һ��ˮ�ܳ�ˮ������ΪB����ˮ�����㹫ʽ(s1*A)/S��S��ʾδ�µ���ˮ�ڳ�ˮ��֮�͡�
����
��һ�а���������  n A B  ������Ŀ���Ѹ���  (1<=n<=100000, 1<=B<=A<=10000)
�ڶ���Ϊn������ s1,s2,s3...sn (1<=si<=10000) �����ˮ�ڴ�С

���
���ٶ�ס���ٳ�ˮ�ڣ�����ʹ�õ�һ��ˮ�ܳ�ˮ������ΪB��
��������

4 10 3
2 2 2 2

�������

1

��Դ

ACM��ѵ�� 
*/
