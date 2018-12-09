#include<iostream>
#include<string.h>
using namespace std;
char str[105];
char a[105][105];
void print()
{
	for(int i=0;i<105;i++)
	for(int j=0;j<105;j++)
	{
		if(a[i][j]!=0)
		cout<<a[i][j];
	}
	cout<<endl;
}
int main() {
	int d;
	while(cin>>str) {
		cin>>d;
		memset(a,0,sizeof(a));
		int len=strlen(str);
		int i=0,x=0;
		while(i<len) {
			for(int j=0; j<d; j++) {
				a[j][x]=str[i++];
				if(i>=len)
					break;
			}
			x++;
			for(int j=d-2; j>0; j--) {
				a[j][x]=str[i++];
				if(i>=len)
					break;
			}
			x++;
		}
		print();
	}
}

