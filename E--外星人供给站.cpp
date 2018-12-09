#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
typedef struct {
	int l,r;
} ZB;
ZB zb[105];
bool cmp(ZB x,ZB y) {
	return x.r<y.r;
}
int fx() {
	int n,r;
	cin>>n>>r;
	for(int i=0; i<n; i++) {
		int x,y;
		cin>>x>>y;
		int q;
		q=sqrt(r*r-y*y);
		zb[i].l=x-q;
		zb[i].r=x+q;
	}
	sort(zb,zb+n,cmp);
	int rs=zb[0].r;
	int cnt=1;
	for(int i=1; i<n; i++) {
		if(zb[i].l>rs) {
			cnt++;
			rs=zb[i].r;
		}
	}
	cout<<cnt<<endl;
}

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
fx();
return 0;
}
