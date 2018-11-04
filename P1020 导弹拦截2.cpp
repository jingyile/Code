#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn];
int f[maxn];
int main() {
    int m=0,x,ans1=0;
    int l,r,mid;
    f[0]=50005;
    while(cin>>x) {
        a[++m]=x;
    }
    for(int i=1; i<=m; i++) {
        if(f[ans1]>=a[i]) {
            ans1++;
            f[ans1]=a[i];
        } else { //二分查找
            l=0;
            r=ans1;
            while(l<r) {
                mid=(l+r)/2;
                if(f[mid]>=a[i])l=mid+1;
                else {
                    r=mid;
                }
            }
            if(l!=0)f[l]=a[i];
        }
    }
    cout<<ans1<<endl;
    f[0]=-1;
    int ans2=0;
    for(int i=1; i<=m; i++) {
        if(f[ans2]<a[i]) {
            ans2++;
            f[ans2]=a[i];
        } else { //二分查找
            l=0;
            r=ans2;
            while(l<r) {
                mid=(l+r)/2;
                if(f[mid]>=a[i])r=mid;
                else {
                    l=mid+1;
                }
            }
            f[l]=a[i];
        }
    }
    cout<<ans2<<endl;
    return 0;
}
