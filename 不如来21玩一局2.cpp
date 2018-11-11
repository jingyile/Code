//压缩题目数据范围 
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int x,y;
	int ans=0;
	for(y=1;y<b;y++)
	{
		for(x=a/b*y;x<(a-c)*y/b+c+1;x++)
		{
			if(x>a*y/b&&b*(x-c)<(a-c)*y)//y为自变量，判断x的取值 
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
