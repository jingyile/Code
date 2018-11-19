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
		cnt=0;//骨头 
		cin>>vp>>vd>>t>>f>>c;
		xp=vp*t,xd=0,time=0;
		while(xp<c)
		{
		xp+=vp;
		xd+=vd;//狼开始行动 	
		//cout<<xp<<" "<<xd<<endl;
		if(xp>=c)//到了 
		break;
		if(xd>=xp)//追上了
		{
		cnt++;
		time=xp/vd+f;
		xp+=vp*time;
		if(xp>=c)//到了 
		break;
		xd=0;	
		}
		//cout<<xp<<" "<<xd<<endl;	
		}
		cout<<cnt<<endl;
	}
	return 0;
}
