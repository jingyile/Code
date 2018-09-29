#include<iostream>
using namespace std;
int s[10010];
int x;
int main() {
	long long a;
	int b;
	while(cin>>a>>b,a||b) {
		x=0;
		for(int i=0; i<=99; i++) {
			if((a*100+i)%b==0)
				{
					s[x]=i;
					x++;
				}
		}
		for(int i=0;i<x-1;i++)
	printf("%02d ",s[i]);
		printf("%02d\n",s[x-1]);
	}

	return 0;
}
