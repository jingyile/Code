/*先找最大数，找到后在其之前找次大数，依次类推即可*/ 
#include<bits/stdc++.h>
using namespace std;
int a[5005];
int b[5005];
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		int s=1;//不需要移动
		int m=0;//最大值下标
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		for(int i=1; i<=n; i++) {
			if(a[i]>a[m])
				m=i;
		}
		sort(b+1,b+n+1);
		for(int i=m-1,j=n-1; i>0; i--) {
			if(a[i]==b[j]) {
				s++;
				j--;
			}
		}
		cout<<n-s<<endl;
	}
	return 0;
}
