#include<iostream>
using namespace std;
int a[100005];
int main()
{
	int T,n,m;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		cin>>a[i];
		int sum=0,i=0,j=0,ans=n+1;//×î´óÖµ
		while(1)
		{
			while(j<n&&sum<m)
			sum+=a[j++];
			if(sum<m)
			break;
			ans=min(ans,j-i);
			sum-=a[i++]; 
		 }
		 if(ans>n)
		 cout<<-1<<endl;
		 else
		 cout<<ans<<endl; 
	}
	return 0;
}
