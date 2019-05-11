#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	int sum=0,sum0=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n/2;i++)
	{
		sum0+=v[i];
	}
	printf("%d %d",n%2,sum-2*sum0);
	return 0;
 } 
