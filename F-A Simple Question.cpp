#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int x;
	int y;
}QQ;
QQ a[5];
int main()
{
	while(cin>>a[0].x)
	{
	cin>>a[0].y>>a[1].x>>a[1].y;
	if(a[0].x>a[1].x)
	swap(a[0],a[1]);
	if(fabs(a[0].x-a[1].x)!=fabs(a[0].y-a[1].y)||a[0].x==a[1].x||a[0].y==a[1].y)
	{
		cout<<"-1"<<endl;
		continue;
	}
	else if(a[0].y<a[1].y)
	{
    a[2].x=min(a[0].x,a[1].x);
	a[2].y=max(a[0].y,a[1].y);	
	a[3].x=max(a[0].x,a[1].x);
	a[3].y=min(a[0].y,a[1].y);	
	}
	else{
	a[2].x=min(a[0].x,a[1].x);
	a[2].y=min(a[0].y,a[1].y);	
	a[3].x=max(a[0].x,a[1].x);
	a[3].y=max(a[0].y,a[1].y);
	}
	cout<<a[2].x<<" "<<a[2].y<<" "<<a[3].x<<" "<<a[3].y<<endl;
	}
	return 0;
}
/*
��Ŀ����
���죬pasher������һ�������Ļ�԰�����Ĵ�Ǿ۲ͣ����ǲ��ҵ��ǣ�pasher�����˻�԰�ĵص㣬��ֻ�ǵ������԰����ȥ���ƽ����������������Σ������ǵû�԰��ÿ�������϶���һ�ô��������ڣ�pasher֪�����������������꣬�����������ڶԽ����ϣ����ܰ����ҳ�������������������?
����
�������룬ֱ���ļ�ĩ��ÿ���������һ�У���һ�а����ĸ�������x1,y1,x2,y2������pasher֪���������������꣬��-100<=x1,y1,x2,y2<=100),����x1,y1������һ������x2,y2�����ڶ�������
���
���û�н������-1�������������������������x3,y3,x4,y4����x������˳�����.
��������

0 0 1 1

�������

0 1 1 0
*/