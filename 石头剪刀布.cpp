#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		char a[15],b[15];
		int cnt1=0,cnt2=0;
		while(n--) {
			cin>>a>>b;
			if(strcmp(a,"rock")==0&&strcmp(b,"scissors")==0) {
				cnt1++;
			}
			if(strcmp(a,"rock")==0&&strcmp(b,"paper")==0) {
				cnt2++;
			}
			if(strcmp(a,"scissors")==0&&strcmp(b,"rock")==0) {
				cnt2++;
			}
			if(strcmp(a,"scissors")==0&&strcmp(b,"paper")==0) {
				cnt1++;
			}
			if(strcmp(a,"paper")==0&&strcmp(b,"scissors")==0) {
				cnt2++;
			}
			if(strcmp(a,"paper")==0&&strcmp(b,"rock")==0) {
				cnt1++;
			}
		}
		if(cnt1==cnt2)
		cout<<"Jiong!"<<endl;
		else if(cnt1<cnt2)
		cout<<"OceanLight"<<endl;
		else
		{
		cout<<"xinge008"<<endl;	
		}
	}
	return 0;
}
/*
��Ŀ����
OceanLight��xinge008����ʯͷ��������������Ϸ�����һ��Ҫ����100��ACM�⡣��������n�֣���ʤ�������һ�����ջ�ʤ���ָ���n�������˵����ƣ���������һ����������˻�ʤ������ͬ�����"Jiong!"
����
����T(T<=30)�����ݡ�ÿ���һ�У�һ������n(n<=100)����ʾ����n����Ϸ������n�У�ÿ�������ַ���x��y��x��ʾOceanLight�������ƣ�y��ʾxinge008�������ƣ�x��y��ֵΪ"rock������scissors���� ��paper���ֱ��ʾʯͷ��������
���
ÿ�������������һ�У���ʾ���һ���������Jiong!����ʾƽ�֡���ע���Сд����
��������

3
1
rock scissors
2
paper paper
paper scissors
1
rock rock

�������

xinge008
OceanLight
Jiong!

*/
