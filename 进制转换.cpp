#include<iostream>
using namespace std;
int a[1000];
int main()
{
	int x=0,n;
	cin>>n;
	while(n)
	{
		a[x]=n%2;
		x++;
		n=n/2;
	}
	for(int i=x-1;i>=0;i--)
	cout<<a[i];
	return 0;
}
