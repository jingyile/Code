#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	int vp,vd,t,f,c;
    double xp,xd,cnt,time;
	cin>>T;  
	while(T--)
	{
		cnt=0;//��ͷ 
		cin>>vp>>vd>>t>>f>>c;
		xp=vp*t,xd=0,time=0;
		while(xp<c)
		{
		xp+=vp;
		xd+=vd;//�ǿ�ʼ�ж� 	
		//cout<<xp<<" "<<xd<<endl;
		if(xp>=c)//���� 
		break;
		if(xd>=xp)//׷����
		{
		cnt++;
		time=xp/vd+f;
		xp+=vp*time;
		if(xp>=c)//���� 
		break;
		xd=0;	
		}
		//cout<<xp<<" "<<xd<<endl;	
		}
		cout<<cnt<<endl;
	}
	return 0;
}
